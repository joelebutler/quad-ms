# Quad MS Templates <!-- omit in toc -->
This is a repository containing templates to process audio recorded via the Quad MS array developed by Jules Ryckebusch within different DAWs. Downloadable files as well as an explanation of methodology used in template creation will be provided to support use of the system as well as further expansion. 

**INSERT LINK ONCE ACCEPTED**
Read more about Quad MS processing at Jules' AES paper [here](https://www.google.com/). 
**INSERT LINK ONCE ACCEPTED**
<hr>

## Table of Contents <!-- omit in toc -->
- [Template Use](#template-use)
  - [Logic Pro](#logic-pro)
    - [Setup / Installation](#setup--installation)
    - [Creating a new Quad MS session](#creating-a-new-quad-ms-session)
    - [Inserting a new Quad MS array into an existing session](#inserting-a-new-quad-ms-array-into-an-existing-session)
    - [Loading files into Quad MS array track stacks](#loading-files-into-quad-ms-array-track-stacks)
  - [Reaper](#reaper)
    - [Setup / Installation](#setup--installation-1)
    - [Creating a new Quad MS session](#creating-a-new-quad-ms-session-1)
    - [Inserting a new Quad MS array into an existing session](#inserting-a-new-quad-ms-array-into-an-existing-session-1)
    - [Loading files into Quad MS array track stacks](#loading-files-into-quad-ms-array-track-stacks-1)
- [Template Creation](#template-creation)
  - [Logic Pro](#logic-pro-1)
  - [Reaper](#reaper-1)
- [Default Mappings](#default-mappings)

### Template Use
<a name="template-use"></a>

The following section will outline the installation and use of template files for DAWs. 
> If you do not see your DAW already listed, there may not be an existing template for it yet. Please follow along with another DAW's template creation instructions within your own, and upload it to share once you're done. If you're having trouble uploading, please reach out to me so we can find a solution!

#### Logic Pro
##### Setup / Installation

First, begin by downloading the Logic Pro template file ***quadms-template.logicx*** from the Releases tab (located on the right side of the repository home page).

After this is downloaded, place it in your Logic Pro templates folder. This defaults to the following:
>/Users/**Your User**/Music/Audio Music Apps/Project Templates/

This can also be located by opening Finder, pressing <kbd>**⌘**</kbd>+<kbd>**Shift**</kbd>+<kbd>**G**</kbd>, and entering the following:
> ~/Music/Audio Music Apps/Project Templates/

Now, when you open Logic Pro (so long as you don't have your settings changed to show a new/previous project by default) under "*My Templates*" you should see **quadms-template.logicx**.


##### Creating a new Quad MS session

To begin a new project with a Quad MS array, simply select the **quadms-template.logicx** entry under "*My Templates*"
as found above.

##### Inserting a new Quad MS array into an existing session
To insert a new instance of the Quad MS array template into an existing Logic Pro session, complete the following steps:

1. Navigate to :
    > File > Import > Logic Projects...
2. In the Finder window that opens, navigate to the folder you previously saved the template file in.
3. Select the **quadms-template.logicx** file and click **Import**.
4. Logic Pro will open a new window on the right panel of your screen.
   1. Select **Immersive Array**, number 1.
   2. Hold <kbd>**Shift**</kbd> and click **BL-S Left RH OOP**, number 19.
   3. Now, with all these tracks highlighted, select **Sends** and **I/O**, then click **Add**.
   4. In the prompt that appears, choose to add new sends. 
   5. Your Immersive Array should now be added to your project!

##### Loading files into Quad MS array track stacks
Once the template is inserted, if you have **individual tracks**:
1. Drag your individually recorded tracks to their proper mapping (see [default mappings](#default-mappings) for more info).
2. The audio tracks should be panned and in place for any processing or mixing you might want to do!

Otherwise, if you have an **8-channel WAV file**:

1. Drag the existing 8-channel .wav file into the session and into the slot of the first audio channel (**FL - Left**)
2. A pop-up will appear reading "Add Selected Files to Tracks", select "**Use existing tracks**" and click **OK**.
3. The audio tracks should be reorganized according to their proper mapping (see [default mappings](#default-mappings) for more info).

#### Reaper
##### Setup / Installation

First, begin by downloading the Reaper template files ***quadms-template.RPP*** and **quadms-template-track.RTrackTemplate** from the Releases tab (located on the right side of the repository home page).

After these are downloaded, place the **.RPP** file in your Project Templates folder. This defaults to the following on MacOS:
>/Users/**Your User**/Library/Application Support/REAPER/ProjectTemplates/

This can also be located by opening Finder, pressing <kbd>**⌘**</kbd>+<kbd>**Shift**</kbd>+<kbd>**G**</kbd>, and entering the following:
> ~/Library/Application Support/Reaper/ProjectTemplates/

Place the **.RTrackTemplate** file in your Track Templates folder. This defaults to the following on MacOS:
>/Users/**Your User**/Library/Application Support/REAPER/TrackTemplates/

This can also be located by opening Finder, pressing <kbd>**⌘**</kbd>+<kbd>**Shift**</kbd>+<kbd>**G**</kbd>, and entering the following:
> ~/Library/Application Support/Reaper/TrackTemplates/

Now, when you open Reaper navigate to both 

> File > Project templates
> &nbsp; &
> Track > Insert track from template

You should see **quadms-template** and **quadms-template-track** in their respective menus.


<hr>

##### Creating a new Quad MS session

To begin a new project with a Quad MS array, navigate to and select 
> *File > Project templates > quadms-template*

##### Inserting a new Quad MS array into an existing session
To insert a new instance of the Quad MS array template into an existing Reaper session, navigate to and select
> *Track > Insert track from template > quadms-template-track*

##### Loading files into Quad MS array track stacks
Once the template is inserted, if you have **individual tracks**:
1. Drag your individually recorded tracks to their proper mapping (see [default mappings](#default-mappings) for more info).
2. The audio tracks should be panned and in place for any processing or mixing you might want to do!

Otherwise, if you have an **8-channel WAV file**:

1. Drag the existing 8-channel .wav file into the session into the "PLACE 8-CH WAV HERE" track space.
2. The audio tracks should be panned and in place for any processing or mixing you might want to do!

### Template Creation
<a name="template-creation"></a>

The following section will outline the methodology I used to create the existing Logic Pro and Reaper templates. Hopefully this will be helpful in modifying this to work with other arrays you may create or translating it into your DAW of choice!

#### Logic Pro
<a name="template-creation-logic"></a>

1. **Created a new Logic session with 7.1.4 format output.** *(See [Apple's support document](https://support.apple.com/en-ng/guide/logicpro/lgcp47c1ef2c/mac) for more help)*
2. **Dragged 8-channel wav file into session**, breaking it into individual tracks.
3. Organized the newly inserted tracks
   1. **Re-ordered** split tracks into Mids and Sides
   2. Created stacks to **group together Mids and Sides** into distinct controllable categories.
   3. Created a stack to **group together** the two **newly created track stacks**.
4. **Doubled** Mid microphones and Side microphones through pre-fader sends.
5. **Inverted the phase of the Side microphone doubles** through the **Gain** plugin.
6. In the 3D object panner, **placed all microphones to their proper panning position** with height information in mind. (mids collapse into similar phase, height collapses to cancel out through phase inversion.)

#### Reaper
<a name="template-creation-reaper"></a>

1. **Created a new Reaper file with 12-channel output.** *(Set master track to 12 track channels through routing button)*
2. **Dragged 8-channel wav file into session.**
3. **Created individual channel routings** through use of pre-fader sends, including out of phase doubles in routing tab. (8-ch track > Routing > Add new send... > Set audio x > y for mapping)
4. **Created out of phase doubles for height** through use of more sends and inverting resulting tracks' phase in the mixer.
5. Used **Channel Mapper-Downmixer (Cockos)** to route tracks to their respective multi-channel outputs.
6. **Created folder tracks** to organize Mids and Sides, and the whole Immersive Array together.

### Default Mappings

By default, the array consists of 8 input streams made up of the following:

> **Channel 1 > Front Left "Mid"**
> **Channel 2 > Front Left "Side"**
> 
> **Channel 3 > Front Right "Mid"**
> **Channel 4 > Front Right "Side"**
> 
> **Channel 5 > Back Right "Mid"**
> **Channel 6 > Back Right "Side"**
> 
> **Channel 7 > Back Left "Mid"**
> **Channel 8 > Back Left "Side"**
> 

These will be routed as follows (chart information provided by Jules Ryckebusch):

**Black (M) is Mid Channel**
**<a style="color: green;">Green</a> (I) is Side Channel In Phase**
**<a style="color: red;">Red</a> (O) is Side Channel Out of Phase**

| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | Out | Routing |
| :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-- |
| <span style="background-color: black; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">M</span> | <span style="background-color: red; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">O</span> | | | | | | | **1** | **Left** |
| | | <span style="background-color: black; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">M</span> |  <span style="background-color: red; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">O</span> | | | | | **2** | **Right** |
| <span style="background-color: none; width: 25px; height: 25px; padding: 0; display: block;"></span> | | | | | | | | **3** | **Left** |
| <span style="background-color: none; width: 25px; height: 25px; padding: 0; display: block;"></span> | | | | | | | | **4** | **LFE** |
| <span style="background-color: none; width: 25px; height: 25px; padding: 0; display: block;"></span> | | | | | | | | **5** | **Left Side** |
| <span style="background-color: none; width: 25px; height: 25px; padding: 0; display: block;"></span> | | | | | | | | **6** | **Right Side** |
| <span style="background-color: none; width: 25px; height: 25px; padding: 0; display: block;"></span> | | | | | | <span style="background-color: black; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">M</span> | <span style="background-color: red; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">O</span> | **7** | **Left Rear** |
| <span style="background-color: none; width: 25px; height: 25px; padding: 0; display: block;"></span> | | | | <span style="background-color: black; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">M</span> | <span style="background-color: red; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">O</span> | | | **8** | **Right Rear** |
| <span style="background-color: black; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">M</span> | <span style="background-color: green; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">I</span> | | | | | | | **9** | **Left FH** |
| <span style="background-color: none; width: 25px; height: 25px; padding: 0; display: block;"></span> | | <span style="background-color: black; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">M</span> | <span style="background-color: green; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">I</span> | | | | | **10** | **Right FH** |
| <span style="background-color: none; width: 25px; height: 25px; padding: 0; display: block;"></span> | | | | | | <span style="background-color: black; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">M</span> | <span style="background-color: green; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">I</span> | **11** | **Left RH** |
| <span style="background-color: none; width: 25px; height: 25px; padding: 0; display: block;"></span> | | | | <span style="background-color: black; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">M</span> | <span style="background-color: green; width: 25px; height: 25px; padding: 0; display: inline-flex; color: white; font-weight: bold; border-radius: 3px; justify-content: center; align-items: center;">I</span> | | | **12** | **Right RH** |