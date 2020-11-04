#include "AUXIVA_mask_Online.h"

class CDR {

private:
	int nfft;
	int nshift;
	int nol;
	int nfreq;
	double epsi;

	double* win_STFT;
	double* R_freq;
	double** mic_array;
	double** Cnn;
	double** Cxx;
	double** X;
	double*** Auto;
	double** Cross;
	double** cdr;
	double** DIFF;
	double* D;
public:
	CDR();
	~CDR();
	void CDR_mask(double** input, int frameInd, double *Mask);
};
