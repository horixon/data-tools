//
//  XDCArray.h
//  Neuralnet
//
//  data-tools ver. 01
//
//  Copyright (c) Microsoft Corporation
//
//  All rights reserved.
//
//  MIT License
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the ""Software""), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
#ifdef __cplusplus
extern "C" {
#endif
#ifndef CBLAS_ENUM_DEFINED_H
#define CBLAS_ENUM_DEFINED_H
enum CBLAS_ORDER {CblasRowMajor=101, CblasColMajor=102 };
enum CBLAS_TRANSPOSE {CblasNoTrans=111, CblasTrans=112, CblasConjTrans=113,
	AtlasConj=114};
enum CBLAS_UPLO  {CblasUpper=121, CblasLower=122};
enum CBLAS_DIAG  {CblasNonUnit=131, CblasUnit=132};
enum CBLAS_SIDE  {CblasLeft=141, CblasRight=142};
#endif  /* CBLAS_ENUM_DEFINED_H */
#ifdef __cplusplus
}
#endif


struct BlasFuncs {
	void (*sset) (const int, const float, float*, const int);
	void (*sgemv) (const enum CBLAS_ORDER __Order,const enum CBLAS_TRANSPOSE __TransA,const int __M,const int __N,const float __alpha,const float *__A,const int __lda,const float *__X,const int __incX,const float __beta,float *__Y,const int __incY);
};

extern struct BlasFuncs Blas;