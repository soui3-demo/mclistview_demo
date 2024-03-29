//stamp:075693aa26de7bd7
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _layout{
			public:
			_layout(){
				dlg_student_sms = _T("layout:dlg.student.sms");
			}
			const TCHAR * dlg_student_sms;
		}layout;
		class _icon{
			public:
			_icon(){
				logo = _T("icon:logo");
			}
			const TCHAR * logo;
		}icon;
		class _imgx{
			public:
			_imgx(){
				cmn_scrollbar = _T("imgx:cmn.scrollbar");
			}
			const TCHAR * cmn_scrollbar;
		}imgx;
		class _image{
			public:
			_image(){
				cmn_border = _T("image:cmn.border");
				sms_help = _T("image:sms.help");
				sms_record = _T("image:sms.record");
				sms_search = _T("image:sms.search");
			}
			const TCHAR * cmn_border;
			const TCHAR * sms_help;
			const TCHAR * sms_record;
			const TCHAR * sms_search;
		}image;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"_name_start",65535},
		{L"btn_send_sms",65559},
		{L"btn_sms_record",65556},
		{L"chk_select_group",65546},
		{L"col_loyal_degree",65550},
		{L"col_nick",65545},
		{L"col_time_span",65549},
		{L"edit_input",65541},
		{L"edit_search",65540},
		{L"edit_sms_input",65554},
		{L"img_sms_help",65558},
		{L"lv_dropdown",65542},
		{L"lv_sms_record",65561},
		{L"scale_100",65536},
		{L"scale_150",65537},
		{L"scale_200",65538},
		{L"tgl_tv_expand",65547},
		{L"tv_student",65544},
		{L"txt_group",65548},
		{L"txt_key",65543},
		{L"txt_loyal_degree",65553},
		{L"txt_nick",65551},
		{L"txt_send_time",65562},
		{L"txt_sms_checked_num",65539},
		{L"txt_sms_content",65564},
		{L"txt_sms_number",65557},
		{L"txt_sms_receiver",65563},
		{L"txt_time_span",65552},
		{L"txt_wordcount",65555},
		{L"wnd_record_frame",65560}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			_name_start = namedXmlID[0].strName;
			btn_send_sms = namedXmlID[1].strName;
			btn_sms_record = namedXmlID[2].strName;
			chk_select_group = namedXmlID[3].strName;
			col_loyal_degree = namedXmlID[4].strName;
			col_nick = namedXmlID[5].strName;
			col_time_span = namedXmlID[6].strName;
			edit_input = namedXmlID[7].strName;
			edit_search = namedXmlID[8].strName;
			edit_sms_input = namedXmlID[9].strName;
			img_sms_help = namedXmlID[10].strName;
			lv_dropdown = namedXmlID[11].strName;
			lv_sms_record = namedXmlID[12].strName;
			scale_100 = namedXmlID[13].strName;
			scale_150 = namedXmlID[14].strName;
			scale_200 = namedXmlID[15].strName;
			tgl_tv_expand = namedXmlID[16].strName;
			tv_student = namedXmlID[17].strName;
			txt_group = namedXmlID[18].strName;
			txt_key = namedXmlID[19].strName;
			txt_loyal_degree = namedXmlID[20].strName;
			txt_nick = namedXmlID[21].strName;
			txt_send_time = namedXmlID[22].strName;
			txt_sms_checked_num = namedXmlID[23].strName;
			txt_sms_content = namedXmlID[24].strName;
			txt_sms_number = namedXmlID[25].strName;
			txt_sms_receiver = namedXmlID[26].strName;
			txt_time_span = namedXmlID[27].strName;
			txt_wordcount = namedXmlID[28].strName;
			wnd_record_frame = namedXmlID[29].strName;
		}
		 const wchar_t * _name_start;
		 const wchar_t * btn_send_sms;
		 const wchar_t * btn_sms_record;
		 const wchar_t * chk_select_group;
		 const wchar_t * col_loyal_degree;
		 const wchar_t * col_nick;
		 const wchar_t * col_time_span;
		 const wchar_t * edit_input;
		 const wchar_t * edit_search;
		 const wchar_t * edit_sms_input;
		 const wchar_t * img_sms_help;
		 const wchar_t * lv_dropdown;
		 const wchar_t * lv_sms_record;
		 const wchar_t * scale_100;
		 const wchar_t * scale_150;
		 const wchar_t * scale_200;
		 const wchar_t * tgl_tv_expand;
		 const wchar_t * tv_student;
		 const wchar_t * txt_group;
		 const wchar_t * txt_key;
		 const wchar_t * txt_loyal_degree;
		 const wchar_t * txt_nick;
		 const wchar_t * txt_send_time;
		 const wchar_t * txt_sms_checked_num;
		 const wchar_t * txt_sms_content;
		 const wchar_t * txt_sms_number;
		 const wchar_t * txt_sms_receiver;
		 const wchar_t * txt_time_span;
		 const wchar_t * txt_wordcount;
		 const wchar_t * wnd_record_frame;
		}name;

		class _id{
		public:
		const static int _name_start	=	65535;
		const static int btn_send_sms	=	65559;
		const static int btn_sms_record	=	65556;
		const static int chk_select_group	=	65546;
		const static int col_loyal_degree	=	65550;
		const static int col_nick	=	65545;
		const static int col_time_span	=	65549;
		const static int edit_input	=	65541;
		const static int edit_search	=	65540;
		const static int edit_sms_input	=	65554;
		const static int img_sms_help	=	65558;
		const static int lv_dropdown	=	65542;
		const static int lv_sms_record	=	65561;
		const static int scale_100	=	65536;
		const static int scale_150	=	65537;
		const static int scale_200	=	65538;
		const static int tgl_tv_expand	=	65547;
		const static int tv_student	=	65544;
		const static int txt_group	=	65548;
		const static int txt_key	=	65543;
		const static int txt_loyal_degree	=	65553;
		const static int txt_nick	=	65551;
		const static int txt_send_time	=	65562;
		const static int txt_sms_checked_num	=	65539;
		const static int txt_sms_content	=	65564;
		const static int txt_sms_number	=	65557;
		const static int txt_sms_receiver	=	65563;
		const static int txt_time_span	=	65552;
		const static int txt_wordcount	=	65555;
		const static int wnd_record_frame	=	65560;
		}id;

		class _string{
		public:
		const static int col_sms_loyal_degree	=	0;
		const static int col_sms_nick	=	1;
		const static int col_sms_timespan	=	2;
		const static int cue_search	=	3;
		const static int cue_sms	=	4;
		const static int current_student	=	5;
		const static int expired_student	=	6;
		const static int scale	=	7;
		const static int send_sms	=	8;
		const static int sms_help	=	9;
		const static int sms_record	=	10;
		const static int sms_recv_head	=	11;
		const static int sms_recv_tail	=	12;
		const static int sms_tip_head	=	13;
		const static int sms_tip_tail	=	14;
		const static int stuent_sms	=	15;
		}string;

		class _color{
		public:
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
