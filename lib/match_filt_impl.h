/* -*- c++ -*- */
/*
 * Copyright 2022 gr-plasma author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_PLASMA_MATCH_FILT_IMPL_H
#define INCLUDED_PLASMA_MATCH_FILT_IMPL_H

#include <gnuradio/fft/fft.h>
#include <gnuradio/plasma/match_filt.h>
#include <gnuradio/plasma/pmt_constants.h>
#include <Eigen/Dense>
#include <arrayfire.h>

namespace gr {
namespace plasma {

class match_filt_impl : public match_filt
{
private:
    af::array d_match_filt;
    size_t d_num_pulse_cpi;
    size_t d_fftsize;
    size_t d_msg_queue_depth;
    std::unique_ptr<fft::fft_complex_fwd> d_fwd;
    std::unique_ptr<fft::fft_complex_rev> d_inv;
    void handle_tx_msg(pmt::pmt_t);
    void handle_rx_msg(pmt::pmt_t);
    void fftresize(size_t);
    void process_data(pmt::pmt_t data);

    pmt::pmt_t d_meta;
    pmt::pmt_t d_data;

public:
    match_filt_impl(size_t num_pulse_cpi);
    ~match_filt_impl();
    
    void set_msg_queue_depth(size_t) override;
};

} // namespace plasma
} // namespace gr

#endif /* INCLUDED_PLASMA_MATCH_FILT_IMPL_H */
