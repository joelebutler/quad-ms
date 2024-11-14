/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
QuadMSAudioProcessorEditor::QuadMSAudioProcessorEditor (QuadMSAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    
    // Slider to control the gain of the child component
    
    addAndMakeVisible(&gainSlider);
    gainSlider.setSliderStyle(juce::Slider::LinearBarVertical);
    gainSlider.setRange(-48.0, 0.0, 0.1);
    gainSlider.setValue(-1.0);
    gainSlider.addListener(this);
    gainSlider.setTextValueSuffix(" db");
    gainSlider.setTextBoxStyle (juce::Slider::TextBoxBelow, true, 90, 0);
    gainSlider.setValue(100);
    gainSlider.setPopupDisplayEnabled(false, false, this);
    
    // Selector to determine whether or not to process track
    // as a side element
    
    addAndMakeVisible(&sideSelector);
    sideSelector.setButtonText("Side");
    sideSelector.setToggleable(true);
    sideSelector.setClickingTogglesState(true);
    sideSelector.setColour(juce::TextButton::ColourIds::buttonColourId, juce::Colours::darkred);
    sideSelector.setColour(juce::TextButton::ColourIds::buttonOnColourId, juce::Colours::forestgreen);
    sideSelector.setColour(juce::TextButton::ColourIds::textColourOnId, juce::Colours::white);
    sideSelector.setColour(juce::TextButton::ColourIds::textColourOffId, juce::Colours::white);
    setSize (120, 330);
}

QuadMSAudioProcessorEditor::~QuadMSAudioProcessorEditor()
{
}

//==============================================================================
void QuadMSAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (juce::Colours::black);

    g.setColour (juce::Colours::whitesmoke);
    g.setFont (juce::FontOptions (16.0f));
    g.drawFittedText ("QuadMS Child", 0, 0, getWidth(), 30, juce::Justification::centred, 1);
}

void QuadMSAudioProcessorEditor::resized()
{
    gainSlider.setBounds(40, 60, 40, getHeight() - 70);
    sideSelector.setBounds(35, 30, 50, 25);
}

void QuadMSAudioProcessorEditor::sliderValueChanged (juce::Slider* slider) {
    if (slider == &gainSlider) {
        audioProcessor.rawVolume = pow (10, gainSlider.getValue() / 20);
    }
}
