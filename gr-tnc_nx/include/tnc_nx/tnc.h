/* -*- c++ -*- */
/* 
 * Copyright 2013 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_TNC_NX_TNC_H
#define INCLUDED_TNC_NX_TNC_H

#include <tnc_nx/api.h>
#include <gnuradio/block.h>

namespace gr {
	namespace tnc_nx {

		/*!
		 * \brief <+description of block+>
		 * \ingroup tnc_nx
		 */
		class TNC_NX_API tnc : virtual public gr::block
		{
		 public:
		  typedef boost::shared_ptr<tnc> sptr;

		  /*!
		   * \brief Return a shared_ptr to a new instance of tnc_nx::tnc.
		   *
		   * To avoid accidental use of raw pointers, tnc_nx::tnc's
		   * constructor is in a private implementation
		   * class. tnc_nx::tnc::make is the public interface for
		   * creating new instances.
		   */
		  static sptr make();
		};
	} // namespace tnc_nx
} // namespace gr

#endif /* INCLUDED_TNC_NX_TNC_H */
