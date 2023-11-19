/* Generated by :claw at 2023-11-19T11:30:06.110154Z */

#include <stddef.h>
#if defined(__cplusplus)
#include <new>
#endif

#define RAYGUI_IMPLEMENTATION 1

#include "raygui.h"


#if !defined(__CLAW_API)
#  if defined(_WIN32)
#    define __CLAW_API __declspec(dllexport)
#  elif defined(__GNUC__)
#    define __CLAW_API __attribute__((visibility("default")))
#  else
#    define __CLAW_API
#  endif
#endif

#ifdef _WIN32
#  include <windows.h>
static HMODULE ___claw_module;

static int ___claw_init_wrapper() {
  ___claw_module = GetModuleHandle(NULL);
  return ___claw_module != NULL;
}

static void ___claw_close_wrapper(void) {
}
#else
#  include <dlfcn.h>
static void* ___claw_module;

static int ___claw_init_wrapper() {
  ___claw_module = dlopen(NULL, RTLD_NOW | RTLD_GLOBAL);
  return ___claw_module != NULL;
}

static void ___claw_close_wrapper(void) {
}
#endif

static void* claw_get_proc_addr(const char *name) {
  if(___claw_module == NULL) {
    return NULL;
  }

#ifdef _WIN32
  return (void*) GetProcAddress(___claw_module, name);
#else
  return dlsym(___claw_module, name);
#endif
}

#if defined(__cplusplus)
extern "C" {
#endif

typedef void (*_GuiDrawIcon_t)(int,int,int,int,Color);
typedef int (*_GuiColorBarHue_t)(Rectangle,const char*,float*);
typedef int (*_GuiColorPanel_t)(Rectangle,const char*,Color*);
typedef int (*_GuiValueBox_t)(Rectangle,const char*,int*,int,int,bool);
typedef int (*_GuiCheckBox_t)(Rectangle,const char*,bool*);
typedef int (*_GuiGroupBox_t)(Rectangle,const char*);
typedef int (*_GuiProgressBar_t)(Rectangle,const char*,const char*,float*,float,float);
typedef int (*_GuiScrollPanel_t)(Rectangle,const char*,Rectangle,Vector2*,Rectangle*);
typedef int (*_GuiColorPanelHSV_t)(Rectangle,const char*,Vector3*);
typedef int (*_GuiTextBox_t)(Rectangle,char*,int,bool);
typedef int (*_GuiButton_t)(Rectangle,const char*);
typedef int (*_GuiLabelButton_t)(Rectangle,const char*);
typedef int (*_GuiPanel_t)(Rectangle,const char*);
typedef int (*_GuiColorPicker_t)(Rectangle,const char*,Color*);
typedef int (*_GuiToggleGroup_t)(Rectangle,const char*,int*);
typedef int (*_GuiComboBox_t)(Rectangle,const char*,int*);
typedef int (*_GuiLabel_t)(Rectangle,const char*);
typedef int (*_GuiColorBarAlpha_t)(Rectangle,const char*,float*);
typedef int (*_GuiWindowBox_t)(Rectangle,const char*);
typedef int (*_GuiSlider_t)(Rectangle,const char*,const char*,float*,float,float);
typedef int (*_GuiMessageBox_t)(Rectangle,const char*,const char*,const char*);
typedef int (*_GuiDummyRec_t)(Rectangle,const char*);
typedef int (*_GuiToggleSlider_t)(Rectangle,const char*,int*);
typedef int (*_GuiTabBar_t)(Rectangle,const char**,int,int*);
typedef int (*_GuiLine_t)(Rectangle,const char*);
typedef int (*_GuiGrid_t)(Rectangle,const char*,float,int,Vector2*);
typedef int (*_GuiSliderPro_t)(Rectangle,const char*,const char*,float*,float,float,int);
typedef int (*_GuiListViewEx_t)(Rectangle,const char**,int,int*,int*,int*);
typedef int (*_GuiDropdownBox_t)(Rectangle,const char*,int*,bool);
typedef int (*_GuiTextInputBox_t)(Rectangle,const char*,const char*,const char*,char*,int,bool*);
typedef int (*_GuiSliderBar_t)(Rectangle,const char*,const char*,float*,float,float);
typedef void (*_GuiSetFont_t)(Font);
typedef int (*_GuiStatusBar_t)(Rectangle,const char*);
typedef int (*_GuiListView_t)(Rectangle,const char*,int*,int*);
typedef int (*_GuiSpinner_t)(Rectangle,const char*,int*,int,int,bool);
typedef Font (*_GuiGetFont_t)();
typedef int (*_GuiToggle_t)(Rectangle,const char*,bool*);
typedef int (*_GuiColorPickerHSV_t)(Rectangle,const char*,Vector3*);

static _GuiDrawIcon_t __v_claw__GuiDrawIcon;
static _GuiColorBarHue_t __v_claw__GuiColorBarHue;
static _GuiColorPanel_t __v_claw__GuiColorPanel;
static _GuiValueBox_t __v_claw__GuiValueBox;
static _GuiCheckBox_t __v_claw__GuiCheckBox;
static _GuiGroupBox_t __v_claw__GuiGroupBox;
static _GuiProgressBar_t __v_claw__GuiProgressBar;
static _GuiScrollPanel_t __v_claw__GuiScrollPanel;
static _GuiColorPanelHSV_t __v_claw__GuiColorPanelHSV;
static _GuiTextBox_t __v_claw__GuiTextBox;
static _GuiButton_t __v_claw__GuiButton;
static _GuiLabelButton_t __v_claw__GuiLabelButton;
static _GuiPanel_t __v_claw__GuiPanel;
static _GuiColorPicker_t __v_claw__GuiColorPicker;
static _GuiToggleGroup_t __v_claw__GuiToggleGroup;
static _GuiComboBox_t __v_claw__GuiComboBox;
static _GuiLabel_t __v_claw__GuiLabel;
static _GuiColorBarAlpha_t __v_claw__GuiColorBarAlpha;
static _GuiWindowBox_t __v_claw__GuiWindowBox;
static _GuiSlider_t __v_claw__GuiSlider;
static _GuiMessageBox_t __v_claw__GuiMessageBox;
static _GuiDummyRec_t __v_claw__GuiDummyRec;
static _GuiToggleSlider_t __v_claw__GuiToggleSlider;
static _GuiTabBar_t __v_claw__GuiTabBar;
static _GuiLine_t __v_claw__GuiLine;
static _GuiGrid_t __v_claw__GuiGrid;
static _GuiSliderPro_t __v_claw__GuiSliderPro;
static _GuiListViewEx_t __v_claw__GuiListViewEx;
static _GuiDropdownBox_t __v_claw__GuiDropdownBox;
static _GuiTextInputBox_t __v_claw__GuiTextInputBox;
static _GuiSliderBar_t __v_claw__GuiSliderBar;
static _GuiSetFont_t __v_claw__GuiSetFont;
static _GuiStatusBar_t __v_claw__GuiStatusBar;
static _GuiListView_t __v_claw__GuiListView;
static _GuiSpinner_t __v_claw__GuiSpinner;
static _GuiGetFont_t __v_claw__GuiGetFont;
static _GuiToggle_t __v_claw__GuiToggle;
static _GuiColorPickerHSV_t __v_claw__GuiColorPickerHSV;

__CLAW_API int __claw_raygui_loader_0255091B6BBE970C1BAA99A3738B1F1D95028F82() {
  if(___claw_init_wrapper()) {

__v_claw__GuiDrawIcon = (_GuiDrawIcon_t) claw_get_proc_addr("_GuiDrawIcon");
__v_claw__GuiColorBarHue = (_GuiColorBarHue_t) claw_get_proc_addr("_GuiColorBarHue");
__v_claw__GuiColorPanel = (_GuiColorPanel_t) claw_get_proc_addr("_GuiColorPanel");
__v_claw__GuiValueBox = (_GuiValueBox_t) claw_get_proc_addr("_GuiValueBox");
__v_claw__GuiCheckBox = (_GuiCheckBox_t) claw_get_proc_addr("_GuiCheckBox");
__v_claw__GuiGroupBox = (_GuiGroupBox_t) claw_get_proc_addr("_GuiGroupBox");
__v_claw__GuiProgressBar = (_GuiProgressBar_t) claw_get_proc_addr("_GuiProgressBar");
__v_claw__GuiScrollPanel = (_GuiScrollPanel_t) claw_get_proc_addr("_GuiScrollPanel");
__v_claw__GuiColorPanelHSV = (_GuiColorPanelHSV_t) claw_get_proc_addr("_GuiColorPanelHSV");
__v_claw__GuiTextBox = (_GuiTextBox_t) claw_get_proc_addr("_GuiTextBox");
__v_claw__GuiButton = (_GuiButton_t) claw_get_proc_addr("_GuiButton");
__v_claw__GuiLabelButton = (_GuiLabelButton_t) claw_get_proc_addr("_GuiLabelButton");
__v_claw__GuiPanel = (_GuiPanel_t) claw_get_proc_addr("_GuiPanel");
__v_claw__GuiColorPicker = (_GuiColorPicker_t) claw_get_proc_addr("_GuiColorPicker");
__v_claw__GuiToggleGroup = (_GuiToggleGroup_t) claw_get_proc_addr("_GuiToggleGroup");
__v_claw__GuiComboBox = (_GuiComboBox_t) claw_get_proc_addr("_GuiComboBox");
__v_claw__GuiLabel = (_GuiLabel_t) claw_get_proc_addr("_GuiLabel");
__v_claw__GuiColorBarAlpha = (_GuiColorBarAlpha_t) claw_get_proc_addr("_GuiColorBarAlpha");
__v_claw__GuiWindowBox = (_GuiWindowBox_t) claw_get_proc_addr("_GuiWindowBox");
__v_claw__GuiSlider = (_GuiSlider_t) claw_get_proc_addr("_GuiSlider");
__v_claw__GuiMessageBox = (_GuiMessageBox_t) claw_get_proc_addr("_GuiMessageBox");
__v_claw__GuiDummyRec = (_GuiDummyRec_t) claw_get_proc_addr("_GuiDummyRec");
__v_claw__GuiToggleSlider = (_GuiToggleSlider_t) claw_get_proc_addr("_GuiToggleSlider");
__v_claw__GuiTabBar = (_GuiTabBar_t) claw_get_proc_addr("_GuiTabBar");
__v_claw__GuiLine = (_GuiLine_t) claw_get_proc_addr("_GuiLine");
__v_claw__GuiGrid = (_GuiGrid_t) claw_get_proc_addr("_GuiGrid");
__v_claw__GuiSliderPro = (_GuiSliderPro_t) claw_get_proc_addr("_GuiSliderPro");
__v_claw__GuiListViewEx = (_GuiListViewEx_t) claw_get_proc_addr("_GuiListViewEx");
__v_claw__GuiDropdownBox = (_GuiDropdownBox_t) claw_get_proc_addr("_GuiDropdownBox");
__v_claw__GuiTextInputBox = (_GuiTextInputBox_t) claw_get_proc_addr("_GuiTextInputBox");
__v_claw__GuiSliderBar = (_GuiSliderBar_t) claw_get_proc_addr("_GuiSliderBar");
__v_claw__GuiSetFont = (_GuiSetFont_t) claw_get_proc_addr("_GuiSetFont");
__v_claw__GuiStatusBar = (_GuiStatusBar_t) claw_get_proc_addr("_GuiStatusBar");
__v_claw__GuiListView = (_GuiListView_t) claw_get_proc_addr("_GuiListView");
__v_claw__GuiSpinner = (_GuiSpinner_t) claw_get_proc_addr("_GuiSpinner");
__v_claw__GuiGetFont = (_GuiGetFont_t) claw_get_proc_addr("_GuiGetFont");
__v_claw__GuiToggle = (_GuiToggle_t) claw_get_proc_addr("_GuiToggle");
__v_claw__GuiColorPickerHSV = (_GuiColorPickerHSV_t) claw_get_proc_addr("_GuiColorPickerHSV");

    ___claw_close_wrapper();
    return 0;
  }
  return 1;
}


__CLAW_API void __claw__GuiDrawIcon(int iconId, int posX, int posY, int pixelSize, Color* color) {
// /usr/local/include/raygui.h:698:16
GuiDrawIcon(iconId, posX, posY, pixelSize, *color);
}

__CLAW_API int __claw__GuiColorBarHue(Rectangle* bounds, const char* text, float* value) {
// /usr/local/include/raygui.h:742:15
return GuiColorBarHue(*bounds, text, value);
}

__CLAW_API int __claw__GuiColorPanel(Rectangle* bounds, const char* text, Color* color) {
// /usr/local/include/raygui.h:740:15
return GuiColorPanel(*bounds, text, color);
}

__CLAW_API int __claw__GuiValueBox(Rectangle* bounds, const char* text, int* value, int minValue, int maxValue, bool editMode) {
// /usr/local/include/raygui.h:724:15
return GuiValueBox(*bounds, text, value, minValue, maxValue, editMode);
}

__CLAW_API int __claw__GuiCheckBox(Rectangle* bounds, const char* text, bool* checked) {
// /usr/local/include/raygui.h:719:15
return GuiCheckBox(*bounds, text, checked);
}

__CLAW_API int __claw__GuiGroupBox(Rectangle* bounds, const char* text) {
// /usr/local/include/raygui.h:706:15
return GuiGroupBox(*bounds, text);
}

__CLAW_API int __claw__GuiProgressBar(Rectangle* bounds, const char* textLeft, const char* textRight, float* value, float minValue, float maxValue) {
// /usr/local/include/raygui.h:729:15
return GuiProgressBar(*bounds, textLeft, textRight, value, minValue, maxValue);
}

__CLAW_API int __claw__GuiScrollPanel(Rectangle* bounds, const char* text, Rectangle* content, Vector2* scroll, Rectangle* view) {
// /usr/local/include/raygui.h:710:15
return GuiScrollPanel(*bounds, text, *content, scroll, view);
}

__CLAW_API int __claw__GuiColorPanelHSV(Rectangle* bounds, const char* text, Vector3* colorHsv) {
// /usr/local/include/raygui.h:744:15
return GuiColorPanelHSV(*bounds, text, colorHsv);
}

__CLAW_API int __claw__GuiTextBox(Rectangle* bounds, char* text, int textSize, bool editMode) {
// /usr/local/include/raygui.h:725:15
return GuiTextBox(*bounds, text, textSize, editMode);
}

__CLAW_API int __claw__GuiButton(Rectangle* bounds, const char* text) {
// /usr/local/include/raygui.h:714:15
return GuiButton(*bounds, text);
}

__CLAW_API int __claw__GuiLabelButton(Rectangle* bounds, const char* text) {
// /usr/local/include/raygui.h:715:15
return GuiLabelButton(*bounds, text);
}

__CLAW_API int __claw__GuiPanel(Rectangle* bounds, const char* text) {
// /usr/local/include/raygui.h:708:15
return GuiPanel(*bounds, text);
}

__CLAW_API int __claw__GuiColorPicker(Rectangle* bounds, const char* text, Color* color) {
// /usr/local/include/raygui.h:739:15
return GuiColorPicker(*bounds, text, color);
}

__CLAW_API int __claw__GuiToggleGroup(Rectangle* bounds, const char* text, int* active) {
// /usr/local/include/raygui.h:717:15
return GuiToggleGroup(*bounds, text, active);
}

__CLAW_API int __claw__GuiComboBox(Rectangle* bounds, const char* text, int* active) {
// /usr/local/include/raygui.h:720:15
return GuiComboBox(*bounds, text, active);
}

__CLAW_API int __claw__GuiLabel(Rectangle* bounds, const char* text) {
// /usr/local/include/raygui.h:713:15
return GuiLabel(*bounds, text);
}

__CLAW_API int __claw__GuiColorBarAlpha(Rectangle* bounds, const char* text, float* alpha) {
// /usr/local/include/raygui.h:741:15
return GuiColorBarAlpha(*bounds, text, alpha);
}

__CLAW_API int __claw__GuiWindowBox(Rectangle* bounds, const char* title) {
// /usr/local/include/raygui.h:705:15
return GuiWindowBox(*bounds, title);
}

__CLAW_API int __claw__GuiSlider(Rectangle* bounds, const char* textLeft, const char* textRight, float* value, float minValue, float maxValue) {
// /usr/local/include/raygui.h:727:15
return GuiSlider(*bounds, textLeft, textRight, value, minValue, maxValue);
}

__CLAW_API int __claw__GuiMessageBox(Rectangle* bounds, const char* title, const char* message, const char* buttons) {
// /usr/local/include/raygui.h:737:15
return GuiMessageBox(*bounds, title, message, buttons);
}

__CLAW_API int __claw__GuiDummyRec(Rectangle* bounds, const char* text) {
// /usr/local/include/raygui.h:731:15
return GuiDummyRec(*bounds, text);
}

__CLAW_API int __claw__GuiToggleSlider(Rectangle* bounds, const char* text, int* active) {
// /usr/local/include/raygui.h:718:15
return GuiToggleSlider(*bounds, text, active);
}

__CLAW_API int __claw__GuiTabBar(Rectangle* bounds, const char** text, int count, int* active) {
// /usr/local/include/raygui.h:709:15
return GuiTabBar(*bounds, text, count, active);
}

__CLAW_API int __claw__GuiLine(Rectangle* bounds, const char* text) {
// /usr/local/include/raygui.h:707:15
return GuiLine(*bounds, text);
}

__CLAW_API int __claw__GuiGrid(Rectangle* bounds, const char* text, float spacing, int subdivs, Vector2* mouseCell) {
// /usr/local/include/raygui.h:732:15
return GuiGrid(*bounds, text, spacing, subdivs, mouseCell);
}

__CLAW_API int __claw__GuiSliderPro(Rectangle* bounds, const char* textLeft, const char* textRight, float* value, float minValue, float maxValue, int sliderWidth) {
// /usr/local/include/raygui.h:2935:5
return GuiSliderPro(*bounds, textLeft, textRight, value, minValue, maxValue, sliderWidth);
}

__CLAW_API int __claw__GuiListViewEx(Rectangle* bounds, const char** text, int count, int* scrollIndex, int* active, int* focus) {
// /usr/local/include/raygui.h:736:15
return GuiListViewEx(*bounds, text, count, scrollIndex, active, focus);
}

__CLAW_API int __claw__GuiDropdownBox(Rectangle* bounds, const char* text, int* active, bool editMode) {
// /usr/local/include/raygui.h:722:15
return GuiDropdownBox(*bounds, text, active, editMode);
}

__CLAW_API int __claw__GuiTextInputBox(Rectangle* bounds, const char* title, const char* message, const char* buttons, char* text, int textMaxSize, bool* secretViewActive) {
// /usr/local/include/raygui.h:738:15
return GuiTextInputBox(*bounds, title, message, buttons, text, textMaxSize, secretViewActive);
}

__CLAW_API int __claw__GuiSliderBar(Rectangle* bounds, const char* textLeft, const char* textRight, float* value, float minValue, float maxValue) {
// /usr/local/include/raygui.h:728:15
return GuiSliderBar(*bounds, textLeft, textRight, value, minValue, maxValue);
}

__CLAW_API void __claw__GuiSetFont(Font* font) {
// /usr/local/include/raygui.h:676:16
GuiSetFont(*font);
}

__CLAW_API int __claw__GuiStatusBar(Rectangle* bounds, const char* text) {
// /usr/local/include/raygui.h:730:15
return GuiStatusBar(*bounds, text);
}

__CLAW_API int __claw__GuiListView(Rectangle* bounds, const char* text, int* scrollIndex, int* active) {
// /usr/local/include/raygui.h:735:15
return GuiListView(*bounds, text, scrollIndex, active);
}

__CLAW_API int __claw__GuiSpinner(Rectangle* bounds, const char* text, int* value, int minValue, int maxValue, bool editMode) {
// /usr/local/include/raygui.h:723:15
return GuiSpinner(*bounds, text, value, minValue, maxValue, editMode);
}

__CLAW_API Font* __claw__GuiGetFont(Font* __claw_result_) {
// /usr/local/include/raygui.h:677:16
(*__claw_result_) = GuiGetFont();
return __claw_result_;
}

__CLAW_API int __claw__GuiToggle(Rectangle* bounds, const char* text, bool* active) {
// /usr/local/include/raygui.h:716:15
return GuiToggle(*bounds, text, active);
}

__CLAW_API int __claw__GuiColorPickerHSV(Rectangle* bounds, const char* text, Vector3* colorHsv) {
// /usr/local/include/raygui.h:743:15
return GuiColorPickerHSV(*bounds, text, colorHsv);
}

#if defined(__cplusplus)
}
#endif
