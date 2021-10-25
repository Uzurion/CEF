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
// $hash=f2ef36943d3cb292573201d2b15b4406d9aaeab4$
//

#include "libcef_dll/ctocpp/resource_request_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/callback_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/response_cpptoc.h"
#include "libcef_dll/ctocpp/cookie_access_filter_ctocpp.h"
#include "libcef_dll/ctocpp/resource_handler_ctocpp.h"
#include "libcef_dll/ctocpp/response_filter_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefCookieAccessFilter>
CefResourceRequestHandlerCToCpp::GetCookieAccessFilter(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request) {
  cef_resource_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_cookie_access_filter))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return nullptr;
  // Unverified params: browser, frame

  // Execute
  cef_cookie_access_filter_t* _retval = _struct->get_cookie_access_filter(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request));

  // Return type: refptr_same
  return CefCookieAccessFilterCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefResourceRequestHandler::ReturnValue
CefResourceRequestHandlerCToCpp::OnBeforeResourceLoad(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request,
    CefRefPtr<CefCallback> callback) {
  cef_resource_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_before_resource_load))
    return RV_CONTINUE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return RV_CONTINUE;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return RV_CONTINUE;
  // Unverified params: browser, frame

  // Execute
  cef_return_value_t _retval = _struct->on_before_resource_load(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request), CefCallbackCppToC::Wrap(callback));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefResourceHandler>
CefResourceRequestHandlerCToCpp::GetResourceHandler(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request) {
  cef_resource_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_resource_handler))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return nullptr;
  // Unverified params: browser, frame

  // Execute
  cef_resource_handler_t* _retval = _struct->get_resource_handler(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request));

  // Return type: refptr_same
  return CefResourceHandlerCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefResourceRequestHandlerCToCpp::OnResourceRedirect(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request,
    CefRefPtr<CefResponse> response,
    CefString& new_url) {
  cef_resource_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_resource_redirect))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return;
  // Verify param: response; type: refptr_diff
  DCHECK(response.get());
  if (!response.get())
    return;
  // Unverified params: browser, frame

  // Execute
  _struct->on_resource_redirect(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request), CefResponseCppToC::Wrap(response),
      new_url.GetWritableStruct());
}

NO_SANITIZE("cfi-icall")
bool CefResourceRequestHandlerCToCpp::OnResourceResponse(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request,
    CefRefPtr<CefResponse> response) {
  cef_resource_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_resource_response))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return false;
  // Verify param: response; type: refptr_diff
  DCHECK(response.get());
  if (!response.get())
    return false;
  // Unverified params: browser, frame

  // Execute
  int _retval = _struct->on_resource_response(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request), CefResponseCppToC::Wrap(response));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefResponseFilter>
CefResourceRequestHandlerCToCpp::GetResourceResponseFilter(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request,
    CefRefPtr<CefResponse> response) {
  cef_resource_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_resource_response_filter))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return nullptr;
  // Verify param: response; type: refptr_diff
  DCHECK(response.get());
  if (!response.get())
    return nullptr;
  // Unverified params: browser, frame

  // Execute
  cef_response_filter_t* _retval = _struct->get_resource_response_filter(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request), CefResponseCppToC::Wrap(response));

  // Return type: refptr_same
  return CefResponseFilterCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefResourceRequestHandlerCToCpp::OnResourceLoadComplete(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request,
    CefRefPtr<CefResponse> response,
    URLRequestStatus status,
    int64 received_content_length) {
  cef_resource_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_resource_load_complete))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return;
  // Verify param: response; type: refptr_diff
  DCHECK(response.get());
  if (!response.get())
    return;
  // Unverified params: browser, frame

  // Execute
  _struct->on_resource_load_complete(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request), CefResponseCppToC::Wrap(response),
      status, received_content_length);
}

NO_SANITIZE("cfi-icall")
void CefResourceRequestHandlerCToCpp::OnProtocolExecution(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefRequest> request,
    bool& allow_os_execution) {
  cef_resource_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_protocol_execution))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return;
  // Unverified params: browser, frame

  // Translate param: allow_os_execution; type: bool_byref
  int allow_os_executionInt = allow_os_execution;

  // Execute
  _struct->on_protocol_execution(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request), &allow_os_executionInt);

  // Restore param:allow_os_execution; type: bool_byref
  allow_os_execution = allow_os_executionInt ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefResourceRequestHandlerCToCpp::CefResourceRequestHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefResourceRequestHandlerCToCpp::~CefResourceRequestHandlerCToCpp() {}

template <>
cef_resource_request_handler_t* CefCToCppRefCounted<
    CefResourceRequestHandlerCToCpp,
    CefResourceRequestHandler,
    cef_resource_request_handler_t>::UnwrapDerived(CefWrapperType type,
                                                   CefResourceRequestHandler*
                                                       c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefResourceRequestHandlerCToCpp,
                        CefResourceRequestHandler,
                        cef_resource_request_handler_t>::kWrapperType =
        WT_RESOURCE_REQUEST_HANDLER;
