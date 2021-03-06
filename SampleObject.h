//******************************************************************************
//  CottonObject - a thin wrapper around NSDictionary to make life better with
//  JSON (and other) network objects.  For more details, checkout the github
//  for this project http://github.com/hermiteer/CottonObject
//
//  Created by Christoph on 6/22/14.
//
//  The MIT License (MIT)
//
//  Copyright (c) 2014 Hermiteer, LLC.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//******************************************************************************

#import "CottonObject.h"

//------------------------------------------------------------------------------

@interface SampleObject : CottonObject

//------------------------------------------------------------------------------

// readonly properties
@property (nonatomic, readonly) NSString* name;
@property (nonatomic, readonly) NSNumber* type;

//------------------------------------------------------------------------------

// mutable property
@property (nonatomic, copy) NSString* title;

//------------------------------------------------------------------------------

// child object
@property (nonatomic, readonly) SampleObject* childObject;

//------------------------------------------------------------------------------

@end
