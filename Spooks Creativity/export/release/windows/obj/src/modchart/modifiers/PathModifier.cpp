// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_math_Vector3
#include <math/Vector3.h>
#endif
#ifndef INCLUDED_modchart_ModManager
#include <modchart/ModManager.h>
#endif
#ifndef INCLUDED_modchart_Modifier
#include <modchart/Modifier.h>
#endif
#ifndef INCLUDED_modchart_NoteModifier
#include <modchart/NoteModifier.h>
#endif
#ifndef INCLUDED_modchart_modifiers_PathModifier
#include <modchart/modifiers/PathModifier.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e13cd29175e20c56_18_new,"modchart.modifiers.PathModifier","new",0xa07524f2,"modchart.modifiers.PathModifier.new","modchart/modifiers/PathModifier.hx",18,0x6982cdbc)
HX_LOCAL_STACK_FRAME(_hx_pos_e13cd29175e20c56_22_getName,"modchart.modifiers.PathModifier","getName",0x995e2793,"modchart.modifiers.PathModifier.getName","modchart/modifiers/PathModifier.hx",22,0x6982cdbc)
HX_LOCAL_STACK_FRAME(_hx_pos_e13cd29175e20c56_24_getMoveSpeed,"modchart.modifiers.PathModifier","getMoveSpeed",0x3c138c6e,"modchart.modifiers.PathModifier.getMoveSpeed","modchart/modifiers/PathModifier.hx",24,0x6982cdbc)
HX_LOCAL_STACK_FRAME(_hx_pos_e13cd29175e20c56_28_getPath,"modchart.modifiers.PathModifier","getPath",0x9ab09aed,"modchart.modifiers.PathModifier.getPath","modchart/modifiers/PathModifier.hx",28,0x6982cdbc)
HX_LOCAL_STACK_FRAME(_hx_pos_e13cd29175e20c56_71_getPos,"modchart.modifiers.PathModifier","getPos",0xf410e94c,"modchart.modifiers.PathModifier.getPos","modchart/modifiers/PathModifier.hx",71,0x6982cdbc)
HX_LOCAL_STACK_FRAME(_hx_pos_e13cd29175e20c56_103_getSubmods,"modchart.modifiers.PathModifier","getSubmods",0xbd2304a9,"modchart.modifiers.PathModifier.getSubmods","modchart/modifiers/PathModifier.hx",103,0x6982cdbc)
namespace modchart{
namespace modifiers{

void PathModifier_obj::__construct( ::modchart::ModManager modMgr, ::modchart::Modifier parent){
            	HX_GC_STACKFRAME(&_hx_pos_e13cd29175e20c56_18_new)
HXLINE(  21)		this->totalDists = ::Array_obj< Float >::__new(0);
HXLINE(  20)		this->pathData = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  32)		super::__construct(modMgr,parent);
HXLINE(  33)		this->moveSpeed = ( (Float)(this->getMoveSpeed()) );
HXLINE(  34)		::Array< ::Dynamic> path = this->getPath();
HXLINE(  36)		{
HXLINE(  36)			int _g = 0;
HXDLIN(  36)			int _g1 = path->length;
HXDLIN(  36)			while((_g < _g1)){
HXLINE(  36)				_g = (_g + 1);
HXDLIN(  36)				int dir = (_g - 1);
HXLINE(  38)				int idx = 0;
HXLINE(  39)				this->totalDists[dir] = ( (Float)(0) );
HXLINE(  40)				this->pathData[dir] = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  41)				while((idx < path->__get(dir).StaticCast< ::Array< ::Dynamic> >()->length)){
HXLINE(  42)					 ::math::Vector3 pos = path->__get(dir).StaticCast< ::Array< ::Dynamic> >()->__get(idx).StaticCast<  ::math::Vector3 >();
HXLINE(  44)					if ((idx != 0)) {
HXLINE(  45)						 ::Dynamic last = this->pathData->__get(dir).StaticCast< ::Array< ::Dynamic> >()->__get((idx - 1));
HXLINE(  46)						::Array< Float > base = this->totalDists;
HXDLIN(  46)						int dir1 = dir;
HXDLIN(  46)						 ::math::Vector3 pt1 = ( ( ::math::Vector3)(last->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) );
HXDLIN(  46)						Float x = (pos->x - pt1->x);
HXDLIN(  46)						Float y = (pos->y - pt1->y);
HXDLIN(  46)						Float z = (pos->z - pt1->z);
HXDLIN(  46)						base[dir1] = (base->__get(dir1) + ::Math_obj::abs(::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)))));
HXLINE(  47)						Float totalDist = this->totalDists->__get(dir);
HXLINE(  49)						last->__SetField(HX_("end",db,03,4d,00),totalDist,::hx::paccDynamic);
HXLINE(  50)						last->__SetField(HX_("dist",66,67,69,42),(( (Float)(last->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic)) ) - totalDist),::hx::paccDynamic);
            					}
HXLINE(  55)					::Array< ::Dynamic> _hx_tmp = this->pathData->__get(dir).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  56)					 ::math::Vector3 a =  ::math::Vector3_obj::__alloc( HX_CTX ,(-(::Note_obj::swagWidth) / ( (Float)(2) )),(-(::Note_obj::swagWidth) / ( (Float)(2) )),null());
HXDLIN(  56)					 ::math::Vector3 result = null();
HXDLIN(  56)					if (::hx::IsNull( result )) {
HXLINE(  56)						result =  ::math::Vector3_obj::__alloc( HX_CTX ,null(),null(),null());
            					}
HXDLIN(  56)					{
HXLINE(  56)						result->x = (pos->x + a->x);
HXDLIN(  56)						result->y = (pos->y + a->y);
HXDLIN(  56)						result->z = (pos->z + a->z);
            					}
HXLINE(  55)					_hx_tmp->push( ::Dynamic(::hx::Anon_obj::Create(4)
            						->setFixed(0,HX_("start",62,74,0b,84),this->totalDists->__get(dir))
            						->setFixed(1,HX_("position",a9,a0,fa,ca),result)
            						->setFixed(2,HX_("end",db,03,4d,00),( (Float)(0) ))
            						->setFixed(3,HX_("dist",66,67,69,42),( (Float)(0) ))));
HXLINE(  61)					idx = (idx + 1);
            				}
            			}
            		}
HXLINE(  65)		{
HXLINE(  65)			int _g2 = 0;
HXDLIN(  65)			int _g3 = this->totalDists->length;
HXDLIN(  65)			while((_g2 < _g3)){
HXLINE(  65)				_g2 = (_g2 + 1);
HXDLIN(  65)				int dir2 = (_g2 - 1);
HXLINE(  66)				::haxe::Log_obj::trace(dir2, ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("className",a3,92,3d,dc),HX_("modchart.modifiers.PathModifier",00,84,a7,3d))
            					->setFixed(1,HX_("customParams",d7,51,18,ed),::cpp::VirtualArray_obj::__new(1)->init(0,this->totalDists->__get(dir2)))
            					->setFixed(2,HX_("methodName",cc,19,0f,12),HX_("new",60,d0,53,00))
            					->setFixed(3,HX_("fileName",e7,5a,43,62),HX_("source/modchart/modifiers/PathModifier.hx",b0,d1,a8,3b))
            					->setFixed(4,HX_("lineNumber",dd,81,22,76),66)));
            			}
            		}
            	}

Dynamic PathModifier_obj::__CreateEmpty() { return new PathModifier_obj; }

void *PathModifier_obj::_hx_vtable = 0;

Dynamic PathModifier_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PathModifier_obj > _hx_result = new PathModifier_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PathModifier_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0ce062e5) {
		if (inClassId<=(int)0x08af6b5c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08af6b5c;
		} else {
			return inClassId==(int)0x0ce062e5;
		}
	} else {
		return inClassId==(int)0x4386e937;
	}
}

::String PathModifier_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_e13cd29175e20c56_22_getName)
HXDLIN(  22)		return HX_("basePath",56,d6,9f,fe);
            	}


int PathModifier_obj::getMoveSpeed(){
            	HX_STACKFRAME(&_hx_pos_e13cd29175e20c56_24_getMoveSpeed)
HXDLIN(  24)		return 5000;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PathModifier_obj,getMoveSpeed,return )

::Array< ::Dynamic> PathModifier_obj::getPath(){
            	HX_STACKFRAME(&_hx_pos_e13cd29175e20c56_28_getPath)
HXDLIN(  28)		return ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PathModifier_obj,getPath,return )

 ::math::Vector3 PathModifier_obj::getPos(Float time,Float visualDiff,Float timeDiff,Float beat, ::math::Vector3 pos,int data,int player, ::flixel::FlxSprite obj){
            	HX_GC_STACKFRAME(&_hx_pos_e13cd29175e20c56_71_getPos)
HXLINE(  72)		if ((this->getValue(player) == 0)) {
HXLINE(  72)			return pos;
            		}
HXLINE(  74)		Float vDiff = -(timeDiff);
HXLINE(  78)		Float progress = ((vDiff / -(this->moveSpeed)) * this->totalDists->__get(data));
HXLINE(  79)		 ::math::Vector3 outPos =  ::math::Vector3_obj::__alloc( HX_CTX ,pos->x,pos->y,pos->z);
HXLINE(  80)		::Array< ::Dynamic> daPath = this->pathData->__get(data).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  81)		if ((progress <= 0)) {
HXLINE(  81)			 ::math::Vector3 daPath1 = ( ( ::math::Vector3)(daPath->__get(0)->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) );
HXDLIN(  81)			return pos->lerp(daPath1,this->getValue(player));
            		}
HXLINE(  83)		int idx = 0;
HXLINE(  87)		while((idx < daPath->length)){
HXLINE(  88)			 ::Dynamic cData = daPath->__get(idx);
HXLINE(  89)			 ::Dynamic nData = daPath->__get((idx + 1));
HXLINE(  90)			bool _hx_tmp;
HXDLIN(  90)			if (::hx::IsNotNull( nData )) {
HXLINE(  90)				_hx_tmp = ::hx::IsNotNull( cData );
            			}
            			else {
HXLINE(  90)				_hx_tmp = false;
            			}
HXDLIN(  90)			if (_hx_tmp) {
HXLINE(  91)				bool _hx_tmp1;
HXDLIN(  91)				if (::hx::IsGreater( progress,cData->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic) )) {
HXLINE(  91)					_hx_tmp1 = ::hx::IsLess( progress,cData->__Field(HX_("end",db,03,4d,00),::hx::paccDynamic) );
            				}
            				else {
HXLINE(  91)					_hx_tmp1 = false;
            				}
HXDLIN(  91)				if (_hx_tmp1) {
HXLINE(  92)					Float alpha = ((( (Float)(cData->__Field(HX_("start",62,74,0b,84),::hx::paccDynamic)) ) - progress) / ( (Float)(cData->__Field(HX_("dist",66,67,69,42),::hx::paccDynamic)) ));
HXLINE(  93)					 ::math::Vector3 interpPos = ( ( ::math::Vector3)(cData->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) )->lerp(( ( ::math::Vector3)(nData->__Field(HX_("position",a9,a0,fa,ca),::hx::paccDynamic)) ),alpha);
HXLINE(  94)					outPos = pos->lerp(interpPos,this->getValue(player));
            				}
            			}
HXLINE(  97)			idx = (idx + 1);
            		}
HXLINE(  99)		return outPos;
            	}


::Array< ::String > PathModifier_obj::getSubmods(){
            	HX_STACKFRAME(&_hx_pos_e13cd29175e20c56_103_getSubmods)
HXDLIN( 103)		return ::Array_obj< ::String >::__new(0);
            	}



::hx::ObjectPtr< PathModifier_obj > PathModifier_obj::__new( ::modchart::ModManager modMgr, ::modchart::Modifier parent) {
	::hx::ObjectPtr< PathModifier_obj > __this = new PathModifier_obj();
	__this->__construct(modMgr,parent);
	return __this;
}

::hx::ObjectPtr< PathModifier_obj > PathModifier_obj::__alloc(::hx::Ctx *_hx_ctx, ::modchart::ModManager modMgr, ::modchart::Modifier parent) {
	PathModifier_obj *__this = (PathModifier_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PathModifier_obj), true, "modchart.modifiers.PathModifier"));
	*(void **)__this = PathModifier_obj::_hx_vtable;
	__this->__construct(modMgr,parent);
	return __this;
}

PathModifier_obj::PathModifier_obj()
{
}

void PathModifier_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PathModifier);
	HX_MARK_MEMBER_NAME(moveSpeed,"moveSpeed");
	HX_MARK_MEMBER_NAME(pathData,"pathData");
	HX_MARK_MEMBER_NAME(totalDists,"totalDists");
	 ::modchart::Modifier_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PathModifier_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(moveSpeed,"moveSpeed");
	HX_VISIT_MEMBER_NAME(pathData,"pathData");
	HX_VISIT_MEMBER_NAME(totalDists,"totalDists");
	 ::modchart::Modifier_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PathModifier_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getPos") ) { return ::hx::Val( getPos_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return ::hx::Val( getName_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pathData") ) { return ::hx::Val( pathData ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveSpeed") ) { return ::hx::Val( moveSpeed ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalDists") ) { return ::hx::Val( totalDists ); }
		if (HX_FIELD_EQ(inName,"getSubmods") ) { return ::hx::Val( getSubmods_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMoveSpeed") ) { return ::hx::Val( getMoveSpeed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PathModifier_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"pathData") ) { pathData=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveSpeed") ) { moveSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalDists") ) { totalDists=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PathModifier_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("moveSpeed",b6,66,30,3f));
	outFields->push(HX_("pathData",6f,9e,02,38));
	outFields->push(HX_("totalDists",e9,07,72,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PathModifier_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(PathModifier_obj,moveSpeed),HX_("moveSpeed",b6,66,30,3f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PathModifier_obj,pathData),HX_("pathData",6f,9e,02,38)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(PathModifier_obj,totalDists),HX_("totalDists",e9,07,72,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PathModifier_obj_sStaticStorageInfo = 0;
#endif

static ::String PathModifier_obj_sMemberFields[] = {
	HX_("moveSpeed",b6,66,30,3f),
	HX_("pathData",6f,9e,02,38),
	HX_("totalDists",e9,07,72,e0),
	HX_("getName",01,22,82,1b),
	HX_("getMoveSpeed",40,03,87,4e),
	HX_("getPath",5b,95,d4,1c),
	HX_("getPos",9e,96,24,a3),
	HX_("getSubmods",fb,c2,ec,7a),
	::String(null()) };

::hx::Class PathModifier_obj::__mClass;

void PathModifier_obj::__register()
{
	PathModifier_obj _hx_dummy;
	PathModifier_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("modchart.modifiers.PathModifier",00,84,a7,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PathModifier_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PathModifier_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PathModifier_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PathModifier_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace modchart
} // end namespace modifiers