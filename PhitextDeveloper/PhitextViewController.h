//
//  PhitextViewController.h
//  PhitextDeveloper
//
// Copyright 2013 Corin Lawson
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <UIKit/UIKit.h>
#import <Phitext/Phitext.h>
#import <Phicolor/PhiColorPatchControl.h>
#import <Phitext/PhiTextStyle.h>

@class PhiTextStyle;
@class PhiColorPatchControl;

@interface PhitextViewController : UIViewController <PhiTextViewDelegate> {
    IBOutlet PhiTextEditorView *editor;
    IBOutlet UITextView *textView;
    IBOutlet UINavigationController *textStyleController;
    IBOutlet PhiTextStyle *textStyle;
	IBOutlet UILabel *postionLabel;
    IBOutlet UILabel *tileHeightLabel;
    IBOutlet UISlider *tileHeightSlider;
    IBOutlet UILabel *tileWidthLabel;
    IBOutlet UISlider *tileWidthSlider;
    IBOutlet UILabel *heightHintLabel;
    IBOutlet UISlider *heightHintSlider;
    IBOutlet UILabel *rrHeight;
    IBOutlet UITextField *rrLength;
    IBOutlet UITextField *rrOffset;
    IBOutlet UILabel *rrWidth;
    IBOutlet UILabel *vrcpLength;
    IBOutlet UILabel *vrcpOffset;
    IBOutlet UILabel *vrcrLength;
    IBOutlet UILabel *vrcrOffset;
    IBOutlet UILabel *rrX;
    IBOutlet UILabel *rrY;
    IBOutlet PhiColorPatchControl *backgroundColorPatch;
    IBOutlet PhiColorPatchControl *textViewBackgroundColorPatch;
    IBOutlet UISlider *alphaSlider;
    IBOutlet UISlider *textViewAlphaSlider;
    IBOutlet UISwitch *atBoundaryBackward;
    IBOutlet UISwitch *atBoundaryForward;
    IBOutlet UISwitch *withinTextUnitBackward;
    IBOutlet UISwitch *withinTextUnitForward;
    IBOutlet UILabel *toBoundaryBackward;
    IBOutlet UILabel *toBoundaryForward;
	IBOutlet UISegmentedControl *granularity;
}
- (IBAction)applyStyle:(id)sender;
- (IBAction)changeTileHeight:(id)sender;
- (IBAction)changeTileWidth:(id)sender;
- (IBAction)changeHeightHint:(id)sender;
- (IBAction)clearText;
- (IBAction)copyText;
- (IBAction)loadText;
- (IBAction)makeSkinny:(id)sender;
- (IBAction)makeWide:(id)sender;
- (IBAction)scrollToCaret;
- (IBAction)scrollPageUp;
- (IBAction)scrollPageDown;
- (IBAction)scrollToTop;
- (IBAction)updateTokenizer:(id)sender;
- (IBAction)updateRectForRange:(id)sender;
- (IBAction)toggleEditable;
- (IBAction)toggleTextViewOpacity:(id)sender;
- (IBAction)toggleOpacity:(id)sender;
- (IBAction)toggleWrap;
- (IBAction)editorColorDidChange;
- (IBAction)textViewColorDidChange;

@end
