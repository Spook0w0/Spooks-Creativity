// Generated by Haxe 4.3.2
#ifndef INCLUDED_modchart_events_ModEvent
#define INCLUDED_modchart_events_ModEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_modchart_events_BaseEvent
#include <modchart/events/BaseEvent.h>
#endif
HX_DECLARE_CLASS1(modchart,ModManager)
HX_DECLARE_CLASS1(modchart,Modifier)
HX_DECLARE_CLASS2(modchart,events,BaseEvent)
HX_DECLARE_CLASS2(modchart,events,ModEvent)

namespace modchart{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ModEvent_obj : public  ::modchart::events::BaseEvent_obj
{
	public:
		typedef  ::modchart::events::BaseEvent_obj super;
		typedef ModEvent_obj OBJ_;
		ModEvent_obj();

	public:
		enum { _hx_ClassId = 0x43e39c8d };

		void __construct(Float step,::String modName,Float target,::hx::Null< int >  __o_player, ::modchart::ModManager modMgr);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="modchart.events.ModEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"modchart.events.ModEvent"); }
		static ::hx::ObjectPtr< ModEvent_obj > __new(Float step,::String modName,Float target,::hx::Null< int >  __o_player, ::modchart::ModManager modMgr);
		static ::hx::ObjectPtr< ModEvent_obj > __alloc(::hx::Ctx *_hx_ctx,Float step,::String modName,Float target,::hx::Null< int >  __o_player, ::modchart::ModManager modMgr);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModEvent",18,1e,9d,40); }

		::String modName;
		Float endVal;
		int player;
		 ::modchart::Modifier mod;
};

} // end namespace modchart
} // end namespace events

#endif /* INCLUDED_modchart_events_ModEvent */ 