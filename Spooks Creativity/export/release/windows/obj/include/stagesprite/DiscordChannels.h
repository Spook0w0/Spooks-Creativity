// Generated by Haxe 4.3.2
#ifndef INCLUDED_stagesprite_DiscordChannels
#define INCLUDED_stagesprite_DiscordChannels

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(stagesprite,DiscordChannels)

namespace stagesprite{


class HXCPP_CLASS_ATTRIBUTES DiscordChannels_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef DiscordChannels_obj OBJ_;
		DiscordChannels_obj();

	public:
		enum { _hx_ClassId = 0x0981c621 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="stagesprite.DiscordChannels")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"stagesprite.DiscordChannels"); }
		static ::hx::ObjectPtr< DiscordChannels_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< DiscordChannels_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DiscordChannels_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DiscordChannels",fc,b3,f4,5a); }

		Float defaultX;
		Float distanceScroll;
		 ::flixel::tweens::FlxTween beatTween;
		 ::flixel::tweens::FlxTween scrollTween;
		int beatPhase;
		Float intensity;
		void stepHit(int step);
		::Dynamic stepHit_dyn();

		int set_beatPhase(int value);
		::Dynamic set_beatPhase_dyn();

};

} // end namespace stagesprite

#endif /* INCLUDED_stagesprite_DiscordChannels */ 