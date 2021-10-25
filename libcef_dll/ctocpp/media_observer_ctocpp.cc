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
// $hash=0b4d805c7313e553fe3b0f47905810172d666df7$
//

#include "libcef_dll/ctocpp/media_observer_ctocpp.h"
#include "libcef_dll/cpptoc/media_route_cpptoc.h"
#include "libcef_dll/cpptoc/media_sink_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefMediaObserverCToCpp::OnSinks(
    const std::vector<CefRefPtr<CefMediaSink>>& sinks) {
  shutdown_checker::AssertNotShutdown();

  cef_media_observer_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_sinks))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: sinks; type: refptr_vec_diff_byref_const
  const size_t sinksCount = sinks.size();
  cef_media_sink_t** sinksList = NULL;
  if (sinksCount > 0) {
    sinksList = new cef_media_sink_t*[sinksCount];
    DCHECK(sinksList);
    if (sinksList) {
      for (size_t i = 0; i < sinksCount; ++i) {
        sinksList[i] = CefMediaSinkCppToC::Wrap(sinks[i]);
      }
    }
  }

  // Execute
  _struct->on_sinks(_struct, sinksCount, sinksList);

  // Restore param:sinks; type: refptr_vec_diff_byref_const
  if (sinksList)
    delete[] sinksList;
}

NO_SANITIZE("cfi-icall")
void CefMediaObserverCToCpp::OnRoutes(
    const std::vector<CefRefPtr<CefMediaRoute>>& routes) {
  shutdown_checker::AssertNotShutdown();

  cef_media_observer_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_routes))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: routes; type: refptr_vec_diff_byref_const
  const size_t routesCount = routes.size();
  cef_media_route_t** routesList = NULL;
  if (routesCount > 0) {
    routesList = new cef_media_route_t*[routesCount];
    DCHECK(routesList);
    if (routesList) {
      for (size_t i = 0; i < routesCount; ++i) {
        routesList[i] = CefMediaRouteCppToC::Wrap(routes[i]);
      }
    }
  }

  // Execute
  _struct->on_routes(_struct, routesCount, routesList);

  // Restore param:routes; type: refptr_vec_diff_byref_const
  if (routesList)
    delete[] routesList;
}

NO_SANITIZE("cfi-icall")
void CefMediaObserverCToCpp::OnRouteStateChanged(CefRefPtr<CefMediaRoute> route,
                                                 ConnectionState state) {
  shutdown_checker::AssertNotShutdown();

  cef_media_observer_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_route_state_changed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: route; type: refptr_diff
  DCHECK(route.get());
  if (!route.get())
    return;

  // Execute
  _struct->on_route_state_changed(_struct, CefMediaRouteCppToC::Wrap(route),
                                  state);
}

NO_SANITIZE("cfi-icall")
void CefMediaObserverCToCpp::OnRouteMessageReceived(
    CefRefPtr<CefMediaRoute> route,
    const void* message,
    size_t message_size) {
  shutdown_checker::AssertNotShutdown();

  cef_media_observer_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_route_message_received))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: route; type: refptr_diff
  DCHECK(route.get());
  if (!route.get())
    return;
  // Verify param: message; type: simple_byaddr
  DCHECK(message);
  if (!message)
    return;

  // Execute
  _struct->on_route_message_received(_struct, CefMediaRouteCppToC::Wrap(route),
                                     message, message_size);
}

// CONSTRUCTOR - Do not edit by hand.

CefMediaObserverCToCpp::CefMediaObserverCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefMediaObserverCToCpp::~CefMediaObserverCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_media_observer_t*
CefCToCppRefCounted<CefMediaObserverCToCpp,
                    CefMediaObserver,
                    cef_media_observer_t>::UnwrapDerived(CefWrapperType type,
                                                         CefMediaObserver* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefMediaObserverCToCpp,
                                   CefMediaObserver,
                                   cef_media_observer_t>::kWrapperType =
    WT_MEDIA_OBSERVER;
