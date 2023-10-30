#include "core.h"
int main() {
	mystream inputStream;
	mystream outputStream;

	for (int idx = 0; idx < 500; idx++) {
		data_t valIn;
		valIn.data = 0.1*(idx%10)*pow(-1,idx/10);
		valIn.keep = 1;
		valIn.strb = 1;
		valIn.user = 1;
		valIn.id = 0;
		valIn.dest = 0;
		inputStream << valIn;
	}

	doGain(inputStream, outputStream);

	for (int idx = 0; idx < 1000; idx++) {
		data_t valOut;
		outputStream.read(valOut);
		printf("Value is %f \n", (float) valOut.data);

	}

	return 0;
}
