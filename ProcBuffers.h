#include "AUXIVA_mask_Online.h"
#include "sigproc.h"

class ProcBuffers
{
private:
	

public:
	ProcBuffers();
	~ProcBuffers();
	static void Process(double** input, int Nframe);
};