/* -*- c-file-style: "ruby"; indent-tabs-mode: nil -*- */
/*
 *  Copyright (C) 2011  Ruby-GNOME2 Project Team
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA  02110-1301  USA
 */

#ifdef HAVE_GST_PBUTILS
#include "rbgst.h"
#include "rbgst-private.h"
#include <gst/pbutils/pbutils-enumtypes.h>
#include <gst/pbutils/install-plugins.h>

#define RG_TARGET_NAMESPACE cInstallPluginsReturn

static VALUE RG_TARGET_NAMESPACE;

static VALUE
rg_name(VALUE self)
{
    return CSTR2RVAL(gst_install_plugins_return_get_name(
                     (GstInstallPluginsReturn)
                     RVAL2GENUM(self, GST_TYPE_INSTALL_PLUGINS_RETURN)));
}

void
Init_gst_install_plugins_return(VALUE mGst)
{
    RG_TARGET_NAMESPACE = G_DEF_CLASS(GST_TYPE_INSTALL_PLUGINS_RETURN,
                                              "InstallPluginsReturn", mGst);
    RG_DEF_METHOD(name, 0);
}
#endif /* HAVE_GST_PBUTILS */
