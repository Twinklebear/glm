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
\defgroup gtx_matrix_cross_product GLM_GTX_matrix_cross_product: Cross product matrix form
\ingroup gtx

\brief Build cross product matrices

<glm/gtx/matrix_cross_product.hpp> need to be included to use these functionalities.
///////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2005-12-21
// Updated : 2006-11-13
// Licence : This source is under MIT License
// File    : glm/gtx/matrix_cross_product.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_gtx_matrix_cross_product
#define glm_gtx_matrix_cross_product

// Dependency:
#include "../glm.hpp"

#if(defined(GLM_MESSAGES) && !defined(glm_ext))
#	pragma message("GLM: GLM_GTX_matrix_cross_product extension included")
#endif

namespace glm{
namespace gtx
{
	/// \addtogroup gtx_matrix_cross_product
	/// @{

	//! Build a cross product matrix.
	//! From GLM_GTX_matrix_cross_product extension.
	template <typename T> 
	detail::tmat3x3<T> matrixCross3(
		detail::tvec3<T> const & x);
		
	//! Build a cross product matrix.
	//! From GLM_GTX_matrix_cross_product extension.
	template <typename T> 
	detail::tmat4x4<T> matrixCross4(
		detail::tvec3<T> const & x);

	/// @}
}//namespace gtx
}//namespace glm

#include "matrix_cross_product.inl"

#endif//glm_gtx_matrix_cross_product
