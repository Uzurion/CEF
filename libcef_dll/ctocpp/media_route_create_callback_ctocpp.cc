// Copyright (c) 2021 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=ef5393916b6e3a97556d6d1e8c7b799a12f53f7b$
//

#include "libcef_dll/ctocpp/media_route_create_callback_ctocpp.h"
#include "libcef_dll/cpptoc/media_route_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefMediaRouteCreateCallbackCToCpp::OnMediaRouteCreateFinished(
    RouteCreateResult result,
    const CefString& error,
    CefRefPtr<CefMediaRoute> route) {
  shutdown_checker::AssertNotShutdown();

  cef_media_route_create_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_media_route_create_finished))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: error, route

  // Execute
  _struct->on_media_route_create_finished(_struct, result, error.GetStruct(),
                                          CefMediaRouteCppToC::Wrap(route));
}

// CONSTRUCTOR - Do not edit by hand.

CefMediaRouteCreateCallbackCToCpp::CefMediaRouteCreateCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefMediaRouteCreateCallbackCToCpp::~CefMediaRouteCreateCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_media_route_create_callback_t*
CefCToCppRefCounted<CefMediaRouteCreateCallbackCToCpp,
                    CefMediaRouteCreateCallback,
                    cef_media_route_create_callback_t>::
    UnwrapDerived(CefWrapperType type, CefMediaRouteCreateCallback* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefMediaRouteCreateCallbackCToCpp,
                        CefMediaRouteCreateCallback,
                        cef_media_route_create_callback_t>::kWrapperType =
        WT_MEDIA_ROUTE_CREATE_CALLBACK;