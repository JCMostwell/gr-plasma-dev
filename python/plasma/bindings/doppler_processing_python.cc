/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(doppler_processing.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b2c9b73ff88854048b3d06bbde3d110a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/plasma/doppler_processing.h>
// pydoc.h is automatically generated in the build directory
#include <doppler_processing_pydoc.h>

void bind_doppler_processing(py::module& m)
{

    using doppler_processing = ::gr::plasma::doppler_processing;


    py::class_<doppler_processing,
               gr::block,
               gr::basic_block,
               std::shared_ptr<doppler_processing>>(
        m, "doppler_processing", D(doppler_processing))

        .def(py::init(&doppler_processing::make),
             py::arg("num_pulse_cpi"),
             py::arg("nfft"),
             D(doppler_processing, make))


        .def("set_msg_queue_depth",
             &doppler_processing::set_msg_queue_depth,
             py::arg("arg0"),
             D(doppler_processing, set_msg_queue_depth))

        ;
}
