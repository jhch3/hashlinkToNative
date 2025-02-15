﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

int sys_io_FileInput_readByte(sys__io__FileInput r0) {
	hl_fdesc *r2;
	haxe__io__Eof r5;
	int r1, r4;
	r2 = r0->__f;
	r1 = hl_file_read_char(r2);
	r4 = 0;
	if( r1 >= r4 ) goto label$3586$7;
	r5 = (haxe__io__Eof)hl_alloc_obj(haxe__io__Eof__val);
	haxe_io_Eof_new(r5);
	hl_throw((vdynamic*)r5);
	label$3586$7:
	return r1;
}

int sys_io_FileInput_readBytes(sys__io__FileInput r0,haxe__io__Bytes r1,int r2,int r3) {
	venum *r7;
	haxe__io__BytesDataImpl r8;
	hl_fdesc *r10;
	haxe__io__Eof r12;
	vbyte *r9;
	int r5, r6, r11;
	r6 = 0;
	if( r2 < r6 ) goto label$3587$8;
	r6 = 0;
	if( r3 < r6 ) goto label$3587$8;
	r5 = r2 + r3;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	if( r6 >= r5 ) goto label$3587$10;
	label$3587$8:
	r7 = (venum*)global$808;
	hl_throw((vdynamic*)r7);
	label$3587$10:
	r8 = (haxe__io__BytesDataImpl)hl_alloc_obj(haxe__io__BytesDataImpl__val);
	r9 = r1->b;
	r5 = r1->length;
	haxe_io_BytesDataImpl_new(r8,r9,r5);
	r10 = r0->__f;
	if( r8 ) goto label$3587$18;
	r9 = NULL;
	goto label$3587$19;
	label$3587$18:
	r9 = r8->bytes;
	label$3587$19:
	r5 = hl_file_read(r10,r9,r2,r3);
	r11 = 0;
	if( r11 < r5 ) goto label$3587$25;
	r12 = (haxe__io__Eof)hl_alloc_obj(haxe__io__Eof__val);
	haxe_io_Eof_new(r12);
	hl_throw((vdynamic*)r12);
	label$3587$25:
	return r5;
}

void sys_io_FileInput_close(sys__io__FileInput r0) {
	hl_fdesc *r2;
	haxe_io_Input_close(((haxe__io__Input)r0));
	r2 = r0->__f;
	hl_file_close(r2);
	r2 = NULL;
	r0->__f = r2;
	return;
}

void sys_io_FileInput_seek(sys__io__FileInput r0,int r1,venum* r2) {
	String r9;
	venum *r8;
	bool r6;
	hl_fdesc *r7;
	int r4, r5;
	if( r2 == NULL ) hl_null_access();
	r4 = HL__ENUM_INDEX__(r2);
	switch(r4) {
		default:
			goto label$3589$12;
		case 0:
			r5 = 0;
			r4 = r5;
			goto label$3589$12;
		case 1:
			r5 = 1;
			r4 = r5;
			goto label$3589$12;
		case 2:
			r5 = 2;
			r4 = r5;
	}
	label$3589$12:
	r7 = r0->__f;
	r6 = hl_file_seek(r7,r1,r4);
	if( r6 ) goto label$3589$18;
	r9 = (String)global$1619;
	r8 = hl_alloc_enum(&type$633,3);
	((haxe_io_Error_Custom*)r8)->p0 = ((vdynamic*)r9);
	hl_throw((vdynamic*)r8);
	label$3589$18:
	return;
}

int sys_io_FileInput_tell(sys__io__FileInput r0) {
	String r5;
	venum *r4;
	hl_fdesc *r2;
	int r1, r3;
	r2 = r0->__f;
	r1 = hl_file_tell(r2);
	r3 = 0;
	if( r1 >= r3 ) goto label$3590$7;
	r5 = (String)global$1620;
	r4 = hl_alloc_enum(&type$633,3);
	((haxe_io_Error_Custom*)r4)->p0 = ((vdynamic*)r5);
	hl_throw((vdynamic*)r4);
	label$3590$7:
	return r1;
}

void sys_io_FileInput_new(sys__io__FileInput r0,hl_fdesc* r1) {
	r0->__f = r1;
	return;
}

