// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_modchart_ModManager
#include <modchart/ModManager.h>
#endif
#ifndef INCLUDED_modchart_events_BaseEvent
#include <modchart/events/BaseEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c987910bf067efb8_3_new,"modchart.events.BaseEvent","new",0x3792ae58,"modchart.events.BaseEvent.new","modchart/events/BaseEvent.hx",3,0x88ce8638)
HX_LOCAL_STACK_FRAME(_hx_pos_c987910bf067efb8_14_run,"modchart.events.BaseEvent","run",0x3795c543,"modchart.events.BaseEvent.run","modchart/events/BaseEvent.hx",14,0x88ce8638)
namespace modchart{
namespace events{

void BaseEvent_obj::__construct(Float step, ::modchart::ModManager manager){
            	HX_STACKFRAME(&_hx_pos_c987910bf067efb8_3_new)
HXLINE(   7)		this->finished = false;
HXLINE(   6)		this->ignoreExecution = false;
HXLINE(   5)		this->executionStep = ((Float)0);
HXLINE(  10)		this->manager = manager;
HXLINE(  11)		this->executionStep = step;
            	}

Dynamic BaseEvent_obj::__CreateEmpty() { return new BaseEvent_obj; }

void *BaseEvent_obj::_hx_vtable = 0;

Dynamic BaseEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseEvent_obj > _hx_result = new BaseEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BaseEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01e47a14;
}

void BaseEvent_obj::run(Float curStep){
            	HX_STACKFRAME(&_hx_pos_c987910bf067efb8_14_run)
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseEvent_obj,run,(void))


::hx::ObjectPtr< BaseEvent_obj > BaseEvent_obj::__new(Float step, ::modchart::ModManager manager) {
	::hx::ObjectPtr< BaseEvent_obj > __this = new BaseEvent_obj();
	__this->__construct(step,manager);
	return __this;
}

::hx::ObjectPtr< BaseEvent_obj > BaseEvent_obj::__alloc(::hx::Ctx *_hx_ctx,Float step, ::modchart::ModManager manager) {
	BaseEvent_obj *__this = (BaseEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseEvent_obj), true, "modchart.events.BaseEvent"));
	*(void **)__this = BaseEvent_obj::_hx_vtable;
	__this->__construct(step,manager);
	return __this;
}

BaseEvent_obj::BaseEvent_obj()
{
}

void BaseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseEvent);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(executionStep,"executionStep");
	HX_MARK_MEMBER_NAME(ignoreExecution,"ignoreExecution");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_END_CLASS();
}

void BaseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(executionStep,"executionStep");
	HX_VISIT_MEMBER_NAME(ignoreExecution,"ignoreExecution");
	HX_VISIT_MEMBER_NAME(finished,"finished");
}

::hx::Val BaseEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return ::hx::Val( manager ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return ::hx::Val( finished ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executionStep") ) { return ::hx::Val( executionStep ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreExecution") ) { return ::hx::Val( ignoreExecution ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast<  ::modchart::ModManager >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executionStep") ) { executionStep=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreExecution") ) { ignoreExecution=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("manager",6d,92,c1,13));
	outFields->push(HX_("executionStep",04,eb,9d,db));
	outFields->push(HX_("ignoreExecution",26,a0,f6,7c));
	outFields->push(HX_("finished",72,93,0e,95));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::modchart::ModManager */ ,(int)offsetof(BaseEvent_obj,manager),HX_("manager",6d,92,c1,13)},
	{::hx::fsFloat,(int)offsetof(BaseEvent_obj,executionStep),HX_("executionStep",04,eb,9d,db)},
	{::hx::fsBool,(int)offsetof(BaseEvent_obj,ignoreExecution),HX_("ignoreExecution",26,a0,f6,7c)},
	{::hx::fsBool,(int)offsetof(BaseEvent_obj,finished),HX_("finished",72,93,0e,95)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseEvent_obj_sMemberFields[] = {
	HX_("manager",6d,92,c1,13),
	HX_("executionStep",04,eb,9d,db),
	HX_("ignoreExecution",26,a0,f6,7c),
	HX_("finished",72,93,0e,95),
	HX_("run",4b,e7,56,00),
	::String(null()) };

::hx::Class BaseEvent_obj::__mClass;

void BaseEvent_obj::__register()
{
	BaseEvent_obj _hx_dummy;
	BaseEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("modchart.events.BaseEvent",66,e2,de,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace modchart
} // end namespace events