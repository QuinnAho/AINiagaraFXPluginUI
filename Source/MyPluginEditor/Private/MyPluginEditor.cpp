#include "MyPluginEditor.h"
#include "MyPluginEditorWidget.h"
#include "MyPluginEditorSettings.h"

#include "EditorUtilityWidget.h"
#include "EditorUtilitySubsystem.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "LevelEditor.h"

void UMyPluginEditor::Init()
{
	// Put initialization code here
}

void UMyPluginEditor::InitializeTheWidget()
{
	// Initialize the widget here
	EditorWidget->SetTestCheckboxIsChecked(UMyPluginEditorSettings::GetIsCheckboxChecked());

	// Bind all required delegates to the Widget.
	EditorWidget->OnTestButtonPressedDelegate.BindUObject(this, &UMyPluginEditor::OnTestButtonPressed);
}

void UMyPluginEditor::OnTestButtonPressed()
{  }