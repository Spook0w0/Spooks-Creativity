// Generated by Haxe 4.3.2
#ifndef INCLUDED_modchart_modifiers_ConfusionModifier
#define INCLUDED_modchart_modifiers_ConfusionModifier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_modchart_NoteModifier
#include <modchart/NoteModifier.h>
#endif
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS0(StrumNote)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(math,Vector3)
HX_DECLARE_CLASS1(modchart,ModManager)
HX_DECLARE_CLASS1(modchart,Modifier)
HX_DECLARE_CLASS1(modchart,NoteModifier)
HX_DECLARE_CLASS2(modchart,modifiers,ConfusionModifier)

namespace modchart{
namespace modifiers{


class HXCPP_CLASS_ATTRIBUTES ConfusionModifier_obj : public  ::modchart::NoteModifier_obj
{
	public:
		typedef  ::modchart::NoteModifier_obj super;
		typedef ConfusionModifier_obj OBJ_;
		ConfusionModifier_obj();

	public:
		enum { _hx_ClassId = 0x593765fd };

		void __construct( ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="modchart.modifiers.ConfusionModifier")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"modchart.modifiers.ConfusionModifier"); }
		static ::hx::ObjectPtr< ConfusionModifier_obj > __new( ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		static ::hx::ObjectPtr< ConfusionModifier_obj > __alloc(::hx::Ctx *_hx_ctx, ::modchart::ModManager modMgr, ::modchart::Modifier parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ConfusionModifier_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConfusionModifier",1d,ef,8f,72); }

		::String getName();

		bool shouldExecute(int player,Float val);

		void updateNote(Float beat, ::Note note, ::math::Vector3 pos,int player);

		void updateReceptor(Float beat, ::StrumNote receptor, ::math::Vector3 pos,int player);

		::Array< ::String > getSubmods();

};

} // end namespace modchart
} // end namespace modifiers

#endif /* INCLUDED_modchart_modifiers_ConfusionModifier */ 