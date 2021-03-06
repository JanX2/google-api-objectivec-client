/* Copyright (c) 2016 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLWebmastersUrlCrawlErrorCountsPerType.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Search Console API (webmasters/v3)
// Description:
//   Lets you view Google Search Console data for your verified sites.
// Documentation:
//   https://developers.google.com/webmaster-tools/
// Classes:
//   GTLWebmastersUrlCrawlErrorCountsPerType (0 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLWebmastersUrlCrawlErrorCount;

// ----------------------------------------------------------------------------
//
//   GTLWebmastersUrlCrawlErrorCountsPerType
//

// Number of errors per day for a specific error type (defined by platform and
// category).

@interface GTLWebmastersUrlCrawlErrorCountsPerType : GTLObject

// The crawl error type.
@property (nonatomic, copy) NSString *category;

// The error count entries time series.
@property (nonatomic, retain) NSArray *entries;  // of GTLWebmastersUrlCrawlErrorCount

// The general type of Googlebot that made the request (see list of Googlebot
// user-agents for the user-agents used).
@property (nonatomic, copy) NSString *platform;

@end
