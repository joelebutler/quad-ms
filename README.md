# Quad MS Processing

**NOTE: WIP Audio Plugin, will update with more information upon further progress.**

**Purpose:** To create a simple method for processing of 4 M/S inputs in a 4-way height-oriented pattern.

## Example Process Flows

### Logic Pro

Will insert guide.

### Reaper

Will insert guide

### Child Plugin Approach

There are some cases in which only using instances of the child plugin on each track would be ideal. If there are more or less than 4 M/S microphones in the recording pattern or you need more flexibility with individual height setting, this allows individual control.

1. Explode multichannel .wav file to individual tracks
2. Insert the QuadMS Child plugin onto each track
3. Select in the plugin instance whether the track is a mid mic or a side mic
4. Set the relative plugin gain to match desired volume.
