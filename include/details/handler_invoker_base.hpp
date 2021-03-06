// xiva (acronym for HTTP Extended EVent Automata) is a simple HTTP server.
// Copyright (C) 2009 Yandex <highpower@yandex.ru>

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#ifndef XIVA_DETAILS_HANDLER_INVOKER_BASE_HPP_INCLUDED
#define XIVA_DETAILS_HANDLER_INVOKER_BASE_HPP_INCLUDED

#include <boost/intrusive_ptr.hpp>

#include "xiva/shared.hpp"
#include "xiva/forward.hpp"

namespace xiva { namespace details {

class handler_invoker_base : public shared {

public:
	handler_invoker_base();
	virtual ~handler_invoker_base();

	virtual void finish() = 0;
	virtual void wait_for_complete() = 0;
	virtual void init(settings const &s) = 0;
	virtual void attach_logger(boost::intrusive_ptr<logger> const &log) = 0;

private:
	handler_invoker_base(handler_invoker_base const &);
	handler_invoker_base& operator = (handler_invoker_base const &);
};

}} // namespaces

#endif // XIVA_DETAILS_HANDLER_INVOKER_BASE_HPP_INCLUDED
