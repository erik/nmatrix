/////////////////////////////////////////////////////////////////////
// = NMatrix
//
// A linear algebra library for scientific computation in Ruby.
// NMatrix is part of SciRuby.
//
// NMatrix was originally inspired by and derived from NArray, by
// Masahiro Tanaka: http://narray.rubyforge.org
//
// == Copyright Information
//
// SciRuby is Copyright (c) 2010 - 2012, Ruby Science Foundation
// NMatrix is Copyright (c) 2012, Ruby Science Foundation
//
// Please see LICENSE.txt for additional copyright notices.
//
// == Contributing
//
// By contributing source code to SciRuby, you agree to be bound by
// our Contributor Agreement:
//
// * https://github.com/SciRuby/sciruby/wiki/Contributor-Agreement
//
// == blas.c
//
// blas.c is automatically generated by generator.rb. Do not modify
// it directly!
//
// This file contains C ports of BLAS functions that work on integer
// types and eventually rationals. You can find the original template
// in ext/nmatrix/blas/igemm.template.c.
//
// The port was accomplished using f2c (on dgemm.f) and a magnifying
// glass.
//
// Note that this is in no way comparable to ATLAS. Why?
// * We didn't test any options other than CblasNoTrans (for A and B)
// * It doesn't use any of that cool cross-over crap (e.g.,
//   Strassen's algorithm)
// * It really hasn't been tested exhaustively in any way, shape, or
//   form.
//
// This file also contains rational math helper functions so that the
// aforementioned port will work with rationals too. These are in
// ext/nmatrix/blas/rationalmath.template.c. They are derived from
// rational.c in Ruby 1.9.3.

#include "nmatrix.h"

