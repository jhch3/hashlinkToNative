﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

void hxd_fs_ConvertFBX2HMD_convert(hxd__fs__ConvertFBX2HMD r0) {
	hxd__fmt__hmd__Data r8;
	String r5, r6, r10;
	vvirtual *r3;
	hxd__fmt__fbx__HMDOut r7;
	bool r9;
	haxe__io__Bytes r4;
	hxd__fmt__hmd__Writer r15;
	haxe__io__BytesOutput r14;
	vdynamic *r2, *r12;
	int r11, r13;
	hl_trap_ctx trap$0;
	hl_trap(trap$0,r2,label$3532$5);
	r4 = r0->srcBytes;
	r3 = hxd_fmt_fbx_Parser_parse(r4);
	hl_endtrap(trap$0);
	goto label$3532$11;
	label$3532$5:
	r5 = Std_string(r2);
	r6 = (String)global$1197;
	r5 = String___add__(r5,r6);
	r6 = r0->srcPath;
	r5 = String___add__(r5,r6);
	hl_throw((vdynamic*)r5);
	label$3532$11:
	r7 = (hxd__fmt__fbx__HMDOut)hl_alloc_obj(hxd__fmt__fbx__HMDOut__val);
	r5 = r0->srcPath;
	hxd_fmt_fbx_HMDOut_new(r7,r5);
	hxd_fmt_fbx_BaseLibrary_load(((hxd__fmt__fbx__BaseLibrary)r7),r3);
	r5 = NULL;
	r6 = r0->srcFilename;
	r10 = (String)global$1198;
	r9 = StringTools_startsWith(r6,r10);
	if( r9 ) goto label$3532$31;
	r6 = r0->srcFilename;
	if( r6 == NULL ) hl_null_access();
	r6 = String_toLowerCase(r6);
	if( r6 == NULL ) hl_null_access();
	r10 = (String)global$1199;
	r12 = NULL;
	r11 = String_indexOf(r6,r10,r12);
	r13 = 0;
	if( r13 < r11 ) goto label$3532$31;
	r9 = false;
	goto label$3532$32;
	label$3532$31:
	r9 = true;
	label$3532$32:
	r9 = !r9;
	r8 = hxd_fmt_fbx_HMDOut_toHMD(r7,r5,r9);
	r14 = (haxe__io__BytesOutput)hl_alloc_obj(haxe__io__BytesOutput__val);
	haxe_io_BytesOutput_new(r14);
	r15 = (hxd__fmt__hmd__Writer)hl_alloc_obj(hxd__fmt__hmd__Writer__val);
	hxd_fmt_hmd_Writer_new(r15,((haxe__io__Output)r14));
	hxd_fmt_hmd_Writer_write(r15,r8);
	r4 = haxe_io_BytesOutput_getBytes(r14);
	hxd_fs_Convert_save(((hxd__fs__Convert)r0),r4);
	return;
}

void hxd_fs_ConvertFBX2HMD_new(hxd__fs__ConvertFBX2HMD r0) {
	String r2, r3;
	r2 = (String)global$1195;
	r3 = (String)global$1196;
	hxd_fs_Convert_new(((hxd__fs__Convert)r0),r2,r3);
	return;
}

