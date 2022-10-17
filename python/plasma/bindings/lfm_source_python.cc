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
/* BINDTOOL_HEADER_FILE(lfm_source.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(07de02988a23dca5cd5d35e009af9d71)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/plasma/lfm_source.h>
// pydoc.h is automatically generated in the build directory
#include <lfm_source_pydoc.h>

void bind_lfm_source(py::module& m)
{

    using lfm_source = ::gr::plasma::lfm_source;


    py::class_<lfm_source, gr::block, gr::basic_block, std::shared_ptr<lfm_source>>(
        m, "lfm_source", D(lfm_source))

        .def(py::init(&lfm_source::make),
             py::arg("bandwidth"),
             py::arg("start_freq"),
             py::arg("pulse_width"),
             py::arg("samp_rate"),
             D(lfm_source, make))


        .def("init_meta_dict",
             &lfm_source::init_meta_dict,
             py::arg("bandwidth_key"),
             py::arg("start_freq_key"),
             py::arg("duration_key"),
             py::arg("sample_rate_key"),
             py::arg("label_key"),
             D(lfm_source, init_meta_dict))

        ;
}
