# addict50plus Keyboard BUILD GUIDE

![main](https://github.com/user-attachments/assets/1dce476f-f478-4a7e-965b-9dcf54100ee1)
# PARTSLIST
![plist](https://github.com/user-attachments/assets/e1a9dc2d-d649-44af-9765-2a330322938a)

![ple1](https://github.com/user-attachments/assets/536c8912-2620-4de3-a461-41931ba8edc8)

PCB board and each acrylic plate.

![mid](https://github.com/user-attachments/assets/af96703d-75b7-4964-8698-dce49e05a9b3)

The bottom middle plate has a frame shape.

# FIRMWARE
![zero](https://github.com/user-attachments/assets/6a6165d0-f461-4206-819e-07e254b528ae)

First, install the Vial firmware on the microcontroller and test whether it works.

While pressing the BOOT button on the RP2040-ZERO, connect it to the PC using the USB Type-C cable.

![stre](https://github.com/user-attachments/assets/2368563c-54c0-4be3-8b4a-fe820cadefca)

Since it starts with mass storage, copy the addict50plus_Vial.uf2 file into the automatically opened folder.

The file can be downloaded from my GitHub.

![vial](https://github.com/user-attachments/assets/30a668e1-1343-4ddd-8fe3-d758f2bc0a6a)

After restarting the microcomputer, check if you can connect from the Vial homepage using the Vial app or browser.

If the connection is successful, the default keymap will be displayed.

You can freely change the key settings on this screen.

For details, refer to the Vial keyboard site.

# SOLDERING
![daio](https://github.com/user-attachments/assets/58429e36-c04c-49d2-b7ae-72d676d1ebe3)

Solder the components to the board.

Solder the diode first.

![daio2](https://github.com/user-attachments/assets/120a447d-907a-41fb-af02-7091d93d8d43)

The frame to the left of the letter D1 is where the diode will be installed.

Install it so that the vertical line on the diode surface is on the left.

I think it will be easier to work if you solder it to one side of the board in advance.

Diode Solder in the same direction except for D51, where a rotary encoder can be attached.

![mos](https://github.com/user-attachments/assets/21b3f21c-ca7a-43ac-9fa8-7687f5e49a9b)

Next, solder the MOSFET and chip resistor for the LED level shift circuit.

The small part in the image is the MOSFET.

If you are not attaching an LED, you can skip this step.

![mos2](https://github.com/user-attachments/assets/2f440976-86ed-43c3-85a3-33f2099eb421)

Like the diode, I think it will be easier to install if you solder it to one spot on the board in advance.

![chip](https://github.com/user-attachments/assets/156908dc-37ef-4918-ad72-263d05994b0b)

These two chip resistors are also soldered to one side of the board and then installed.

![chip2](https://github.com/user-attachments/assets/62dae246-c0a4-41fa-bb9e-686c172c5059)

The installed resistor has no directionality, so it can be installed in either direction.

![led](https://github.com/user-attachments/assets/1a2a2e0b-1fad-4619-9b2c-31ca7b0edeaf)

Next, attach the LED, but if you are not attaching an LED, you can omit this.

If you are using a temperature-controlled soldering iron, you can usually solder at around 330℃ using leaded solder, but it is better to lower the temperature a little more than that, which may damage the LED.

I think this can be prevented.

If you do not have a temperature-controlled soldering iron, I think it is a good idea to avoid applying the soldering iron to one LED continuously for a long time.

![led2](https://github.com/user-attachments/assets/38a90d2c-04d3-4402-89bd-d61c1ccaeba9)

If you have a test microcontroller, check the LED operation here.

![led3](https://github.com/user-attachments/assets/ef97bc40-bf67-4638-b1f8-9e4f710489d9)

RED

![led4](https://github.com/user-attachments/assets/c40e4c6c-d5f4-4c0a-8d8e-cf2b539077e2)

GREEN

![led5](https://github.com/user-attachments/assets/09f0e4ac-f2f7-4a1e-9ad0-0b3d9cea357a)

BLUE

![led6](https://github.com/user-attachments/assets/ff874670-ddec-4b11-8f97-3f4e47a7b747)

Install all LEDs so that the terminal with the notch is at the mark on the top right.

As with other mounting parts, I think it will be easier to install if you solder that part in advance.

![mx](https://github.com/user-attachments/assets/a2e7f14d-3f7a-46ae-84f8-fcdb33f440be)

Next, install the socket for the MX switch in the same direction as the mark on the board.

I think it will be easier to work if you solder only the pad on one side as shown in the photo.

![re](https://github.com/user-attachments/assets/41dc5d65-db67-4fb1-b106-effedc75b5c1)

Only SW51 has the option to select either a key switch or a rotary encoder.

If you want to attach a rotary encoder, I think it is better to solder the microcontroller first and then install it.

For the diode D51, make sure the vertical line is at the bottom. 

Install in the direction shown in the image.

![mcu](https://github.com/user-attachments/assets/1b987be4-356f-4747-ab10-511b389eff81)

To install the microcomputer, set it as shown in the photo.If you set the short end of the pin header included with RP2040-ZERO on the microcomputer side, the height will be just right and it will be easier to work.

![mcu2](https://github.com/user-attachments/assets/a26d55a2-2e2f-4a5f-bbc1-1934699cd938)

Solder the short end of the pin header. 

There is no need to cut it because the height will be just right.

![mcu3](https://github.com/user-attachments/assets/2887e272-c506-438c-8334-f2f02d54815a)

Solder from the end of each pin header to prevent it from shifting, then solder all pins.

![mcu4](https://github.com/user-attachments/assets/dd2b47ab-6131-4c8d-a1f5-535d82367242)

Soldering complete.

![mcu5](https://github.com/user-attachments/assets/a633a457-eef8-4eb1-8fa1-5dec66038e8c)

On this side, cut off the extra length of the pin header with nippers and solder all the pins.

![mcu6](https://github.com/user-attachments/assets/601c1692-9c47-4084-b79c-f15222097acf)

Soldering complete.
# CASE
![spe](https://github.com/user-attachments/assets/f467cccf-fbc0-4cfb-ad38-1d241ff065d0)

Installation order of each plate 
1. Insert the screw from the top side of the board and attach the spacer.
2. Place the 3mm middle acrylic on the bottom side so that it fits into the spacer hole.
3. Place the 2mm acrylic on the bottom side and attach it with screws.

![spe2](https://github.com/user-attachments/assets/24789a11-3fc9-4e59-bbe4-88adbaf9de89)

The image of the installed spacer. 
viewed from the side is upside down.

![acry](https://github.com/user-attachments/assets/d17c68dd-e037-48b1-9191-a806dde19553)

Peel off the bottom middle acrylic protective sheet. Be careful not to break it as it is thin.

![acry2](https://github.com/user-attachments/assets/819f9d5f-6d78-4225-bae9-80791923589f)

Attach the middle plate by fitting the spacer into the acrylic hole.

![acry3](https://github.com/user-attachments/assets/31c3a761-7376-4d06-b235-d52e63c68ce4)

Place the middle plate in a frame shape as shown in the image.

![acry4](https://github.com/user-attachments/assets/888261e6-15cb-4546-9e56-255a6dd1eb7a)

Place 2mm of acrylic on the bottom side and secure with screws.

The rubber feet stabilize the position of the image.When using a rotary encoder, I think it will be easier to push the button if you attach the rubber feet near the rotary encoder.

![acry5](https://github.com/user-attachments/assets/50af4fb0-865e-4fdd-9e38-2dec7b14b745)

Peel off the protective sheet from the top two acrylic sheets and place them on the board.

![acry6](https://github.com/user-attachments/assets/1715ed4a-61c3-4c3d-b36c-5124e2f5f096)

Just place it in the order of middle → top

![acry7](https://github.com/user-attachments/assets/d3d84f01-e053-483b-9c61-633095871cd5)

Insert the key switch starting from the outer corner.

![acry8](https://github.com/user-attachments/assets/65112eab-0355-44d3-a739-1394181c9c73)

All key switches installed.
# TEST
![ledt](https://github.com/user-attachments/assets/826a8175-cfe8-4690-8351-5bc71a13871f)

Connect it to a computer with a USB cable, and if you have attached an LED, turn it on and test.

I think the way it looks will change depending on the design of the key switch and the color of the housing.

The LED immediately to the left of the microcontroller is a layer indicator. 

The color changes independently because.
# FINAL BUILD
![end](https://github.com/user-attachments/assets/64251e38-35f9-44e7-b2a0-229c0c8b8eaa)

Completed by attaching the keycaps. The rotary encoder knob is approximately 17mm in diameter.

# Enjoy your keyboard life!
