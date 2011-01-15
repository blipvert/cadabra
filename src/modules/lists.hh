/* 

	Cadabra: a field-theory motivated computer algebra system.
	Copyright (C) 2001-2010  Kasper Peeters <kasper.peeters@aei.mpg.de>

   This program is free software: you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
*/

#ifndef lists_hh_
#define lists_hh_

#include "algorithm.hh"

class length : public algorithm {
	public:
		length(exptree&, iterator);

		virtual void     description() const;
		virtual bool     can_apply(iterator);
		virtual result_t apply(iterator&);
};

class take : public algorithm {
	public:
		take(exptree&, iterator);

		virtual void     description() const;
		virtual bool     can_apply(iterator);
		virtual result_t apply(iterator&);

		enum { t_single, t_list, t_sequence } take_type;
		std::vector<long> nums;
};

class range : public algorithm {
	public:
		range(exptree&, iterator);

		virtual void     description() const;
		virtual bool     can_apply(iterator);
		virtual result_t apply(iterator&);

		int from, to, num;
		exptree sym, pat;
};

class inner : public algorithm {
	public:
		inner(exptree&, iterator);

		virtual void     description() const;
		virtual bool     can_apply(iterator);
		virtual result_t apply(iterator&);
};

class list_sum : public algorithm {
	public:
		list_sum(exptree&, iterator);
		
		virtual void     description() const;
		virtual bool     can_apply(iterator);
		virtual result_t apply(iterator&);
};

class coefficients : public algorithm {
	public:
		coefficients(exptree&, iterator);
		
		virtual void     description() const;
		virtual bool     can_apply(iterator);
		virtual result_t apply(iterator&);

		exptree obj;
};

// class symbolic_inner : public algorithm {
// 	public:
// 		symbolic_inner(exptree&, iterator);
// 
// 		virtual void     description() const;
// 		virtual bool     can_apply(iterator);
// 		virtual result_t apply(iterator&);
// };

#endif
