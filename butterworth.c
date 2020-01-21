#include <stdio.h>
#include <stdint.h>

void lowpass_butter_1khz_order4_cuttoff_30hz(double *input, double *output, int n_samples)
{
    // X array size is N_ZEROS + 1 and Y is N_POLES + 1
    double xv[5] = {0};
    double yv[5] = {0};
    const double gain = 1.602898462e+04;

    for (int32_t i = 0; i < n_samples; i++) {
        xv[0] = xv[1];
        xv[1] = xv[2];
        xv[2] = xv[3];
        xv[3] = xv[4];
        xv[4] = input[i] / gain;
        yv[0] = yv[1];
        yv[1] = yv[2];
        yv[2] = yv[3];
        yv[3] = yv[4];
        yv[4] = (xv[0] + xv[4]) + 4 * (xv[1] + xv[3]) + 6 * xv[2]
                + (-0.6105348076 * yv[0]) + (2.7426528211 * yv[1])
                + (-4.6409024127 * yv[2]) + (3.5077862074 * yv[3]);
        output[i] = yv[4];
    }
}

void lowpass_butter_1khz_order5_cuttoff_30hz(double *input, double *output, int n_samples)
{
    // X array size is N_ZEROS + 1 and Y is N_POLES + 1
    double xv[6] = {0};
    double yv[6] = {0};
    const double gain = 1.798461170e+05;

    for (int32_t i = 0; i < n_samples; i++) {
        xv[0] = xv[1];
        xv[1] = xv[2];
        xv[2] = xv[3];
        xv[3] = xv[4];
        xv[4] = xv[5];
        xv[5] = input[i] / gain;
        yv[0] = yv[1];
        yv[1] = yv[2];
        yv[2] = yv[3];
        yv[3] = yv[4];
        yv[4] = yv[5];
        yv[5] = (xv[0] + xv[5]) + 5 * (xv[1] + xv[4]) + 10 * (xv[2] + xv[3])
                + (0.5427513749 * yv[0]) + (-3.0446853092 * yv[1])
                + (6.8543493509 * yv[2]) + (-7.7428695408 * yv[3])
                + (4.3902761943 * yv[4]);
        output[i] = yv[5];
    }
}
