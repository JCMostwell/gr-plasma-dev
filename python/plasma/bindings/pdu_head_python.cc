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
/* BINDTOOL_HEADER_FILE(pdu_head.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b6b90f8d52afa843cb68cdf99b13496f)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/plasma/pdu_head.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_head_pydoc.h>

void bind_pdu_head(py::module& m)
{

    using pdu_head    = ::gr::plasma::pdu_head;


    py::class_<pdu_head, gr::block, gr::basic_block,
        std::shared_ptr<pdu_head>>(m, "pdu_head", D(pdu_head))

        .def(py::init(&pdu_head::make),
           py::arg("nitems"),
           D(pdu_head,make)
        )
        



        ;




}








