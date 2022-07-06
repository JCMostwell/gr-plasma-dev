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
/* BINDTOOL_HEADER_FILE(match_filt.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(28a7e4c17e35be2c3e0d9a8ff8d16297)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/plasma/match_filt.h>
// pydoc.h is automatically generated in the build directory
#include <match_filt_pydoc.h>

void bind_match_filt(py::module& m)
{

    using match_filt = ::gr::plasma::match_filt;


    py::class_<match_filt, gr::block, gr::basic_block, std::shared_ptr<match_filt>>(
        m, "match_filt", D(match_filt))

        .def(py::init(&match_filt::make), py::arg("num_pulse_cpi"), D(match_filt, make))


        .def("set_msg_queue_depth",
             &match_filt::set_msg_queue_depth,
             py::arg("depth"),
             D(match_filt, set_msg_queue_depth))

        ;
}
