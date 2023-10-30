#include "ap_axi_sdata.h"
#include "hls_stream.h"

typedef hls::axis<float, 2, 5, 6> data_t;
typedef hls::stream<data_t> mystream;

void doGain(mystream &inStream,mystream &outStream);
