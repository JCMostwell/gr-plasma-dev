/* -*- c++ -*- */
/*
 * Copyright 2022 gr-plasma author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_PLASMA_LFM_SOURCE_IMPL_H
#define INCLUDED_PLASMA_LFM_SOURCE_IMPL_H

#include <gnuradio/plasma/lfm_source.h>
#include <gnuradio/plasma/pmt_constants.h>
#include <plasma_dsp/linear_fm_waveform.h>
#include <arrayfire.h>

namespace gr {
namespace plasma {


class lfm_source_impl : public lfm_source
{
private:
    const pmt::pmt_t d_port;
    pmt::pmt_t d_msg;
    ::plasma::LinearFMWaveform d_waveform;
    std::unique_ptr<std::complex<float>> d_data;
    size_t d_num_samp;
    uint64_t d_start_time;
    uint64_t d_send_time;

    pmt::pmt_t d_global;
    pmt::pmt_t d_annotations;
    pmt::pmt_t d_meta;


public:
    lfm_source_impl(double bandwidth, double pulse_width, double samp_rate);
    ~lfm_source_impl();

    bool start() override;
};

} // namespace plasma
} // namespace gr

#endif /* INCLUDED_PLASMA_LFM_SOURCE_IMPL_H */
