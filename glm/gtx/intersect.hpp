///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref gtx_associated_min_max
/// @file glm/gtx/associated_min_max.hpp
/// @date 2008-03-10 / 2011-06-07
/// @author Christophe Riccio
///
/// @see core (dependence)
/// @see gtx_extented_min_max (dependence)
///
\defgroup gtx_intersect GLM_GTX_intersect: Intersection tests
\ingroup gtx

\brief Add intersection functions

<glm/gtx/intersect.hpp> need to be included to use these functionalities.
///////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-04-03
// Updated : 2009-01-20
// Licence : This source is under MIT License
// File    : glm/gtx/intersect.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
// - GLM_GTX_closest_point
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gtx_intersect
#define glm_gtx_intersect

// Dependency:
#include "../glm.hpp"
#include "../gtx/closest_point.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTX_closest_point extension included")
#endif

namespace glm{
namespace gtx
{
	/// @addtogroup gtx_intersect
	/// @{

	//! Compute the intersection of a ray and a triangle.
	//! From GLM_GTX_intersect extension.
	template <typename genType>
	bool intersectRayTriangle(
		genType const & orig, genType const & dir,
		genType const & vert0, genType const & vert1, genType const & vert2,
		genType & baryPosition);

    //! Compute the intersection of a line and a triangle.
	//! From GLM_GTX_intersect extension.
	template <typename genType>
	bool intersectLineTriangle(
		genType const & orig, genType const & dir,
		genType const & vert0, genType const & vert1, genType const & vert2,
		genType & position);

    //! Compute the intersection of a ray and a sphere.
	//! From GLM_GTX_intersect extension.
	template <typename genType>
	bool intersectRaySphere(
		genType const & orig, genType const & dir,
		genType const & center, typename genType::value_type radius,
		genType & position, genType & normal);

    //! Compute the intersection of a line and a sphere.
	//! From GLM_GTX_intersect extension
	template <typename genType>
	bool intersectLineSphere(
		genType const & point0, genType const & point1,
		genType const & center, typename genType::value_type radius,
		genType & position, genType & normal);

	/// @}
}//namespace gtx
}//namespace glm

#include "intersect.inl"

#endif//glm_gtx_intersect
