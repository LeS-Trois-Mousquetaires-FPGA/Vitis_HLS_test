#include "core.h"

void doGain(mystream &inStream,mystream &outStream)
{
#pragma HLS INTERFACE axis port=outStream
#pragma HLS INTERFACE axis port=inStream
#pragma HLS INTERFACE ap_ctrl_none port=return

	while (!inStream.empty()) {
#pragma HLS PIPELINE
		// read and cache
		data_t valIn = inStream.read();
		data_t valOut;

		valOut.data = valIn.data * 1.2;
		if (valOut.data > 1.0) valOut.data = 1.0;
		if (valOut.data < -1.0) valOut.data = -1.0;
		valOut.keep = valIn.keep;
		valOut.strb = valIn.strb;
		valOut.user = valIn.user;
		valOut.last = valIn.last;
		valOut.id = valIn.id;
		valOut.dest = valIn.dest;

		outStream.write(valOut);
	}
}
