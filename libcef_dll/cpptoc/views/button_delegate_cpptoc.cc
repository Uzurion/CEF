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
// $hash=ae5b6dce4c1840faa597c2dcb2b92772fa4f8de4$
//

#include "libcef_dll/cpptoc/views/button_delegate_cpptoc.h"
#include "libcef_dll/cpptoc/views/menu_button_delegate_cpptoc.h"
#include "libcef_dll/ctocpp/views/button_ctocpp.h"
#include "libcef_dll/ctocpp/views/view_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
button_delegate_on_button_pressed(struct _cef_button_delegate_t* self,
                                  cef_button_t* button) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: button; type: refptr_diff
  DCHECK(button);
  if (!button)
    return;

  // Execute
  CefButtonDelegateCppToC::Get(self)->OnButtonPressed(
      CefButtonCToCpp::Wrap(button));
}

void CEF_CALLBACK
button_delegate_on_button_state_changed(struct _cef_button_delegate_t* self,
                                        cef_button_t* button) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: button; type: refptr_diff
  DCHECK(button);
  if (!button)
    return;

  // Execute
  CefButtonDelegateCppToC::Get(self)->OnButtonStateChanged(
      CefButtonCToCpp::Wrap(button));
}

cef_size_t CEF_CALLBACK
button_delegate_get_preferred_size(struct _cef_view_delegate_t* self,
                                   cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return CefSize();

  // Execute
  cef_size_t _retval = CefButtonDelegateCppToC::Get(
                           reinterpret_cast<cef_button_delegate_t*>(self))
                           ->GetPreferredSize(CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK
button_delegate_get_minimum_size(struct _cef_view_delegate_t* self,
                                 cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return CefSize();

  // Execute
  cef_size_t _retval = CefButtonDelegateCppToC::Get(
                           reinterpret_cast<cef_button_delegate_t*>(self))
                           ->GetMinimumSize(CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK
button_delegate_get_maximum_size(struct _cef_view_delegate_t* self,
                                 cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefSize();
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return CefSize();

  // Execute
  cef_size_t _retval = CefButtonDelegateCppToC::Get(
                           reinterpret_cast<cef_button_delegate_t*>(self))
                           ->GetMaximumSize(CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK
button_delegate_get_height_for_width(struct _cef_view_delegate_t* self,
                                     cef_view_t* view,
                                     int width) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return 0;

  // Execute
  int _retval = CefButtonDelegateCppToC::Get(
                    reinterpret_cast<cef_button_delegate_t*>(self))
                    ->GetHeightForWidth(CefViewCToCpp::Wrap(view), width);

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK
button_delegate_on_parent_view_changed(struct _cef_view_delegate_t* self,
                                       cef_view_t* view,
                                       int added,
                                       cef_view_t* parent) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return;
  // Verify param: parent; type: refptr_diff
  DCHECK(parent);
  if (!parent)
    return;

  // Execute
  CefButtonDelegateCppToC::Get(reinterpret_cast<cef_button_delegate_t*>(self))
      ->OnParentViewChanged(CefViewCToCpp::Wrap(view), added ? true : false,
                            CefViewCToCpp::Wrap(parent));
}

void CEF_CALLBACK
button_delegate_on_child_view_changed(struct _cef_view_delegate_t* self,
                                      cef_view_t* view,
                                      int added,
                                      cef_view_t* child) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return;
  // Verify param: child; type: refptr_diff
  DCHECK(child);
  if (!child)
    return;

  // Execute
  CefButtonDelegateCppToC::Get(reinterpret_cast<cef_button_delegate_t*>(self))
      ->OnChildViewChanged(CefViewCToCpp::Wrap(view), added ? true : false,
                           CefViewCToCpp::Wrap(child));
}

void CEF_CALLBACK
button_delegate_on_window_changed(struct _cef_view_delegate_t* self,
                                  cef_view_t* view,
                                  int added) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return;

  // Execute
  CefButtonDelegateCppToC::Get(reinterpret_cast<cef_button_delegate_t*>(self))
      ->OnWindowChanged(CefViewCToCpp::Wrap(view), added ? true : false);
}

void CEF_CALLBACK
button_delegate_on_layout_changed(struct _cef_view_delegate_t* self,
                                  cef_view_t* view,
                                  const cef_rect_t* new_bounds) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return;
  // Verify param: new_bounds; type: simple_byref_const
  DCHECK(new_bounds);
  if (!new_bounds)
    return;

  // Translate param: new_bounds; type: simple_byref_const
  CefRect new_boundsVal = new_bounds ? *new_bounds : CefRect();

  // Execute
  CefButtonDelegateCppToC::Get(reinterpret_cast<cef_button_delegate_t*>(self))
      ->OnLayoutChanged(CefViewCToCpp::Wrap(view), new_boundsVal);
}

void CEF_CALLBACK button_delegate_on_focus(struct _cef_view_delegate_t* self,
                                           cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return;

  // Execute
  CefButtonDelegateCppToC::Get(reinterpret_cast<cef_button_delegate_t*>(self))
      ->OnFocus(CefViewCToCpp::Wrap(view));
}

void CEF_CALLBACK button_delegate_on_blur(struct _cef_view_delegate_t* self,
                                          cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view)
    return;

  // Execute
  CefButtonDelegateCppToC::Get(reinterpret_cast<cef_button_delegate_t*>(self))
      ->OnBlur(CefViewCToCpp::Wrap(view));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefButtonDelegateCppToC::CefButtonDelegateCppToC() {
  GetStruct()->on_button_pressed = button_delegate_on_button_pressed;
  GetStruct()->on_button_state_changed =
      button_delegate_on_button_state_changed;
  GetStruct()->base.get_preferred_size = button_delegate_get_preferred_size;
  GetStruct()->base.get_minimum_size = button_delegate_get_minimum_size;
  GetStruct()->base.get_maximum_size = button_delegate_get_maximum_size;
  GetStruct()->base.get_height_for_width = button_delegate_get_height_for_width;
  GetStruct()->base.on_parent_view_changed =
      button_delegate_on_parent_view_changed;
  GetStruct()->base.on_child_view_changed =
      button_delegate_on_child_view_changed;
  GetStruct()->base.on_window_changed = button_delegate_on_window_changed;
  GetStruct()->base.on_layout_changed = button_delegate_on_layout_changed;
  GetStruct()->base.on_focus = button_delegate_on_focus;
  GetStruct()->base.on_blur = button_delegate_on_blur;
}

// DESTRUCTOR - Do not edit by hand.

CefButtonDelegateCppToC::~CefButtonDelegateCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefButtonDelegate> CefCppToCRefCounted<
    CefButtonDelegateCppToC,
    CefButtonDelegate,
    cef_button_delegate_t>::UnwrapDerived(CefWrapperType type,
                                          cef_button_delegate_t* s) {
  if (type == WT_MENU_BUTTON_DELEGATE) {
    return CefMenuButtonDelegateCppToC::Unwrap(
        reinterpret_cast<cef_menu_button_delegate_t*>(s));
  }
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefButtonDelegateCppToC,
                                   CefButtonDelegate,
                                   cef_button_delegate_t>::kWrapperType =
    WT_BUTTON_DELEGATE;
