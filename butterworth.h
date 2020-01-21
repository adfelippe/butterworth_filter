#ifndef __BUTTERWORTH_H__
#define __BUTTERWORTH_H__

/*  ---------------------------------------------------------------------------
 *  Simple Butterworth filter library
 *
 *  @author Anderson Felippe <adfelippe@gmail.com>
 *
 *  @brief  This library provides two simple functions to filter an analog
 *          signal input (stored in an double array) using a Butterworth filter
 *          (4th and 5th orders) that are preset to the following parameters:
 *          sample frequency: 1 kHz
 *          cut-off frequency: 30 Hz (-3 dB attenutation at it)
 *          This functions were based on the code generated by Tom Fisher's
 *          filter design tool, available at:
 *          <https://www-users.cs.york.ac.uk/~fisher/mkfilter/>
 *          If you need different input parameters, it's quite easy to redesign
 *          the filter on the website.
 *  ---------------------------------------------------------------------------
 */

/**
 * @brief:      Apply a 4th order low-pass Butterworth filter to a n-sized
 *              input double array. Result is stored to a same size double
 *              array. This filtered is specifically designed for a signal
 *              with a sampling rate of 1 kHz and a 30 Hz cut-off frequency.
 *
 * @param       input: array to be filtered
 *              output: array to store result (must match size with input)
 *              n_samples: number of samples and therefore size of array
 *
 * @return      void
 */
void lowpass_butter_1khz_order4_cuttoff_30hz(double *input, double *output, int n_samples);

/**
 * @brief:      Apply a 5th order low-pass Butterworth filter to a n-sized
 *              input double array. Result is stored to a same size double
 *              array. This filtered is specifically designed for a signal
 *              with a sampling rate of 1 kHz and a 30 Hz cut-off frequency.
 *
 * @param       input: array to be filtered
 *              output: array to store result (must match size with input)
 *              n_samples: number of samples and therefore size of array
 *
 * @return      void
 */
void lowpass_butter_1khz_order5_cuttoff_30hz(double *input, double *output, int n_samples)
#endif /*__BUTTERWORTH_H__*/