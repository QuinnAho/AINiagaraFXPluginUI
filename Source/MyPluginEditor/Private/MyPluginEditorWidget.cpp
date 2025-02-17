#include "MyPluginEditorWidget.h"

void UMyPluginEditorWidget::TestButtonPressed()
{
	OnTestButtonPressedDelegate.ExecuteIfBound();
}

void UMyPluginEditorWidget::TestCheckBoxCheckChanged(bool bIsChecked)
{
	OnTestCheckboxDelegate.ExecuteIfBound(bIsChecked);
}