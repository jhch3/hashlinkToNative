﻿// Generated by HLC 4.0.0 (HL v4)
#include <hl/code.h>

String h3d_mat_MaterialDatabase_getFilePath(h3d__mat__MaterialDatabase r0,hxd__res__Resource r1) {
	hxd__fs__FileEntry r3;
	String r2, r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->entry;
	if( r3 == NULL ) hl_null_access();
	r2 = hxd_fs_FileEntry_get_directory(r3);
	r4 = (String)global$569;
	r2 = String___add__(r2,r4);
	return r2;
}

vdynamic* h3d_mat_MaterialDatabase_getModelData(h3d__mat__MaterialDatabase r0,hxd__res__Resource r1) {
	vdynobj *r18;
	hxd__fs__FileEntry r6;
	String r5, r11;
	hxd__fs__NotFound r17;
	vvirtual *r7, *r8;
	haxe__ds__StringMap r4;
	bool r16;
	hxd__res__$Loader r14;
	haxe__format__JsonParser r10;
	hxd__res__Loader r13;
	hxd__fs__$NotFound r15;
	vdynamic *r3, *r9;
	hxd__res__Any r12;
	hl_trap_ctx trap$0;
	if( r1 ) goto label$2717$3;
	r3 = NULL;
	return r3;
	label$2717$3:
	r4 = r0->db;
	if( r4 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r6 = r1->entry;
	if( r6 == NULL ) hl_null_access();
	r5 = hxd_fs_FileEntry_get_directory(r6);
	r3 = haxe_ds_StringMap_get(r4,r5);
	r7 = hl_to_virtual(&type$2233,(vdynamic*)r3);
	if( !r7 ) goto label$2717$15;
	if( r7 == NULL ) hl_null_access();
	r3 = hl_vfields(r7)[0] ? (*(vdynamic**)(hl_vfields(r7)[0])) : (vdynamic*)hl_dyn_getp(r7->value,118/*v*/,&type$9);
	return r3;
	label$2717$15:
	r5 = h3d_mat_MaterialDatabase_getFilePath(r0,r1);
	hl_trap(trap$0,r3,label$2717$29);
	r10 = (haxe__format__JsonParser)hl_alloc_obj(haxe__format__JsonParser__val);
	r14 = (hxd__res__$Loader)global$152;
	r13 = r14->currentInstance;
	if( r13 == NULL ) hl_null_access();
	r12 = hxd_res_Loader_load(r13,r5);
	if( r12 == NULL ) hl_null_access();
	r11 = hxd_res_Any_toText(r12);
	haxe_format_JsonParser_new(r10,r11);
	r9 = haxe_format_JsonParser_doParse(r10);
	r3 = r9;
	hl_endtrap(trap$0);
	goto label$2717$37;
	label$2717$29:
	r15 = (hxd__fs__$NotFound)global$572;
	r16 = hl_BaseType_check(((hl__BaseType)r15),r3);
	if( !r16 ) goto label$2717$36;
	r17 = (hxd__fs__NotFound)r3;
	r18 = hl_alloc_dynobj();
	r3 = ((vdynamic*)r18);
	goto label$2717$37;
	label$2717$36:
	hl_rethrow((vdynamic*)r3);
	label$2717$37:
	r4 = r0->db;
	if( r4 == NULL ) hl_null_access();
	r6 = r1->entry;
	if( r6 == NULL ) hl_null_access();
	r11 = hxd_fs_FileEntry_get_directory(r6);
	r8 = hl_alloc_virtual(&type$2233);
	if( hl_vfields(r8)[0] ) *(vdynamic**)(hl_vfields(r8)[0]) = (vdynamic*)r3; else hl_dyn_setp(r8->value,118/*v*/,&type$9,r3);
	haxe_ds_StringMap_set(r4,r11,((vdynamic*)r8));
	return r3;
}

void h3d_mat_MaterialDatabase_saveData(h3d__mat__MaterialDatabase r0,hxd__res__Resource r1,vdynamic* r2) {
	String r3, r11, r12;
	vvirtual *r5;
	bool r10;
	hxd__res__$Loader r7;
	hxd__fs__LocalFileSystem r9;
	hxd__res__Loader r6;
	vclosure *r14;
	vdynamic *r13;
	hxd__fs__$LocalFileSystem r8;
	hl_trap_ctx trap$0;
	r3 = h3d_mat_MaterialDatabase_getFilePath(r0,r1);
	r7 = (hxd__res__$Loader)global$152;
	r6 = r7->currentInstance;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->fs;
	r8 = (hxd__fs__$LocalFileSystem)global$573;
	r10 = hl_BaseType_check(((hl__BaseType)r8),((vdynamic*)r5));
	if( !r10 ) goto label$2718$10;
	r9 = (hxd__fs__LocalFileSystem)hl_dyn_castp(&r5,&type$325,&type$2237);
	goto label$2718$11;
	label$2718$10:
	r9 = NULL;
	label$2718$11:
	if( !r9 ) goto label$2718$18;
	r10 = haxe_io_Path_isAbsolute(r3);
	if( r10 ) goto label$2718$18;
	if( r9 == NULL ) hl_null_access();
	r11 = r9->baseDir;
	r11 = String___add__(r11,r3);
	r3 = r11;
	label$2718$18:
	if( r2 ) goto label$2718$23;
	hl_trap(trap$0,r13,label$2718$22);
	sys_FileSystem_deleteFile(r3);
	hl_endtrap(trap$0);
	label$2718$22:
	goto label$2718$27;
	label$2718$23:
	r14 = NULL;
	r12 = (String)global$193;
	r12 = haxe_format_JsonPrinter_print(r2,r14,r12);
	sys_io_File_saveContent(r3,r12);
	label$2718$27:
	return;
}

vdynamic* h3d_mat_MaterialDatabase_loadMatProps(h3d__mat__MaterialDatabase r0,h3d__mat__Material r1,h3d__mat__MaterialSetup r2) {
	String r6;
	hxd__res__Resource r4;
	vdynamic *r3, *r5;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->model;
	r3 = h3d_mat_MaterialDatabase_getModelData(r0,r4);
	if( r3 ) goto label$2719$5;
	return r3;
	label$2719$5:
	if( r3 == NULL ) hl_null_access();
	r5 = (vdynamic*)hl_dyn_getp((vdynamic*)r3,-536103710/*materials*/,&type$9);
	if( r5 ) goto label$2719$9;
	return r5;
	label$2719$9:
	if( r2 == NULL ) hl_null_access();
	r6 = r2->name;
	r5 = Reflect_field(r5,r6);
	if( r5 ) goto label$2719$14;
	return r5;
	label$2719$14:
	r6 = r1->name;
	r5 = Reflect_field(r5,r6);
	return r5;
}

void h3d_mat_MaterialDatabase_saveMatProps(h3d__mat__MaterialDatabase r0,h3d__mat__Material r1,h3d__mat__MaterialSetup r2) {
	vdynobj *r22;
	bool *r15;
	String r7, r24, r25;
	hl__types__ArrayObj r3, r13;
	hxd__res__Resource r10;
	hl_type *r5;
	bool r14;
	hl__types__ArrayDyn r12;
	vdynamic *r9, *r11, *r19, *r21, *r23;
	int r6, r16, r17, r18, r20;
	varray *r4;
	r5 = &type$13;
	r6 = 3;
	r4 = hl_alloc_array(r5,r6);
	r7 = (String)global$574;
	r6 = 0;
	((String*)(r4 + 1))[r6] = r7;
	if( r2 == NULL ) hl_null_access();
	r7 = r2->name;
	r6 = 1;
	((String*)(r4 + 1))[r6] = r7;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->name;
	r6 = 2;
	((String*)(r4 + 1))[r6] = r7;
	r3 = hl_types_ArrayObj_alloc(r4);
	r10 = r1->model;
	r9 = h3d_mat_MaterialDatabase_getModelData(r0,r10);
	if( r9 ) goto label$2720$19;
	return;
	label$2720$19:
	r11 = r9;
	r5 = &type$9;
	r6 = 0;
	r4 = hl_alloc_array(r5,r6);
	r13 = hl_types_ArrayObj_alloc(r4);
	r14 = true;
	r15 = &r14;
	r12 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r13),r15);
	r6 = 0;
	if( r3 == NULL ) hl_null_access();
	r16 = r3->length;
	r17 = 1;
	r16 = r16 - r17;
	label$2720$32:
	if( r6 >= r16 ) goto label$2720$60;
	r17 = r6;
	++r6;
	if( r3 == NULL ) hl_null_access();
	r20 = r3->length;
	if( ((unsigned)r17) < ((unsigned)r20) ) goto label$2720$41;
	r7 = NULL;
	goto label$2720$44;
	label$2720$41:
	r4 = r3->array;
	r21 = ((vdynamic**)(r4 + 1))[r17];
	r7 = (String)r21;
	label$2720$44:
	r19 = Reflect_field(r9,r7);
	if( r19 ) goto label$2720$56;
	r22 = hl_alloc_dynobj();
	r19 = ((vdynamic*)r22);
	r20 = r3->length;
	if( ((unsigned)r17) < ((unsigned)r20) ) goto label$2720$52;
	r7 = NULL;
	goto label$2720$55;
	label$2720$52:
	r4 = r3->array;
	r23 = ((vdynamic**)(r4 + 1))[r17];
	r7 = (String)r23;
	label$2720$55:
	Reflect_setField(r9,r7,((vdynamic*)r22));
	label$2720$56:
	if( r12 == NULL ) hl_null_access();
	r18 = hl_types_ArrayDyn_push(r12,r9);
	r9 = r19;
	goto label$2720$32;
	label$2720$60:
	if( r3 == NULL ) hl_null_access();
	r19 = hl_types_ArrayObj_pop(r3);
	r7 = (String)r19;
	r14 = Reflect_deleteField(r9,r7);
	if( r1 == NULL ) hl_null_access();
	r19 = r1->props;
	if( !r19 ) goto label$2720$72;
	r24 = NULL;
	r21 = h3d_mat_Material_getDefaultProps(r1,r24);
	r24 = Std_string(r21);
	r25 = Std_string(r19);
	if( r24 != r25 && (!r24 || !r25 || String___compare(r24,(vdynamic*)r25) != 0) ) goto label$2720$91;
	label$2720$72:
	if( r3 == NULL ) hl_null_access();
	r6 = r3->length;
	r16 = 0;
	if( r16 >= r6 ) goto label$2720$90;
	r21 = hl_types_ArrayObj_pop(r3);
	r24 = (String)r21;
	if( r12 == NULL ) hl_null_access();
	r21 = hl_types_ArrayDyn_pop(r12);
	r23 = Reflect_field(r21,r24);
	r13 = Reflect_fields(r23);
	if( r13 == NULL ) hl_null_access();
	r6 = r13->length;
	r16 = 0;
	if( r6 == r16 ) goto label$2720$88;
	goto label$2720$90;
	label$2720$88:
	r14 = Reflect_deleteField(r21,r24);
	goto label$2720$72;
	label$2720$90:
	goto label$2720$92;
	label$2720$91:
	Reflect_setField(r9,r7,r19);
	label$2720$92:
	if( r1 == NULL ) hl_null_access();
	r10 = r1->model;
	r24 = h3d_mat_MaterialDatabase_getFilePath(r0,r10);
	r13 = Reflect_fields(r11);
	if( r13 == NULL ) hl_null_access();
	r6 = r13->length;
	r16 = 0;
	if( r6 != r16 ) goto label$2720$102;
	r21 = NULL;
	r11 = r21;
	label$2720$102:
	r10 = r1->model;
	h3d_mat_MaterialDatabase_saveData(r0,r10,r11);
	return;
}

void h3d_mat_MaterialDatabase_new(h3d__mat__MaterialDatabase r0) {
	haxe__ds__StringMap r1;
	r1 = (haxe__ds__StringMap)hl_alloc_obj(haxe__ds__StringMap__val);
	haxe_ds_StringMap_new(r1);
	r0->db = r1;
	return;
}

