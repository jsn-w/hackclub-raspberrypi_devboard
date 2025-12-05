# journal
---
## Wiring the schematic
<p>I routed the PCB, getting help from the [RP2040 Datasheet](https://pip-assets.raspberrypi.com/categories/814-rp2040/documents/RP-008371-DS-1-rp2040-datasheet.pdf?disposition=inline), page 11</p>
<img height="300" alt="image" src="https://github.com/user-attachments/assets/769bc1f6-b3a2-41ba-a10e-3f587919f546" />
<p>This helped me figure out what and where to connect the pins. I also found placing global labels to be really nice. Here is an image of me actually wiring things on a STM32 board:</p>
<img width="1678" height="1084" alt="image" src="https://github.com/user-attachments/assets/0cb3dd50-bdd5-417f-bb46-85eecc389a46" />
Net labels helped me figure out where to put things.
Something really annoying about this portion is finding the right schematic and footprint for a part that you want to use, oftentimes there aren't any CAD files for the footprints.

## Tracing PCB
<p>First, I placed everything in their relative spots based on the diagram below.</p>
<img height="300" alt="image" src="https://github.com/user-attachments/assets/55f9b6d2-1c16-4df3-a282-38446ccd1379" />
Then, I made sure that some modules were really close to the microcontroller (decoupling capacitors, crystal oscillators)
I realized that on a small board, the decoupling capacitors wouldn't be able to be that close to the microcontroller since there's a lot of wiring going on around those pins.
<img height="250" alt="image" src="https://github.com/user-attachments/assets/4802f649-d8ec-4596-b7c1-f8b9bf1beaa8" />
For a lot of the routing, I had to move a lot of wires down for optimal spacing so I can actually fit some of the capacitors and other components in.
In this portion, I had to rewire the entire section multiple times to allow space for components to be placed above it.
<img height="400" alt="image" src="https://github.com/user-attachments/assets/e099751d-646e-43a9-a916-8b2810510ce1" /><img height="400" alt="image" src="https://github.com/user-attachments/assets/73b3f36c-01ad-4380-96f3-f77e509bb6b2" />
