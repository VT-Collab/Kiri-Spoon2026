# **Robotic Kirispoon Assembly Instructions**
## Description

The Robotic Kirispoon End-Effector is a device developed to securely grab food while maintaining an ergonomic shape for the user's mouth. This document includes materials, tools, and instructions to reproduce the device. An order form is located at the end of this document. 

### Materials
- PLA 3D-printing filament (40 grams)
- TPU 85A 3D-printing filament (5 grams)

### Tools
- Screw Driver
- Allen Wrench 2.5mm

### Parts
- 2305 Series Brass, MOD 0.8, Servo Gear (25 Tooth Spline, 12 Tooth) [Quantity:1]
- 2303 Series Steel, MOD 0.8 Pinion Gear (8mm REX Bore, 36 Tooth) [Quantity:2]
- 1611 Series Flanged Ball Bearing (8mm REX ID x 14mm OD, 5mm Thickness) [Quantity:2]
- 2920 Series Steel Set-Screw Collar (8mm REX Bore) [Quantity:4]
- 1516 Series 8mm REX Standoff (M4 x 0.7mm Threads, 40mm Length) [Quantity:2] 
- 2000 Series Dual Mode Servo (25-2, Torque) [Quantity:1]
- Screws (M4, Length 16mm) [Quantity:3]
- Nuts (M4) [Quantity:3]

### Files
- Angled_Kiripost_45Left.STL
- Angled_Kiripost_45Right.STL
- PandaHousingOneServo.STL
- KirigamiMesh.STL

## Preparation
#### 1. Download the following .STL files:
    - Angled_Kiripost_45Left.STL
    - Angled_Kiripost_45Right.STL
    - PandaHousingOneServo.STL

#### 2. Print PLA Parts
    1. On a 3D printing software, import the three files downloaded in step 1
    
<img width="441" height="512" alt="Screenshot 2026-01-14 095416" src="https://github.com/user-attachments/assets/f7d449f7-12dd-4b4a-9520-992c151722be" />

    2. Orient the three files onto the printer bed as shown above
    3. Adjust the printer settings to allow PLA printing
    4. Load PLA filament into the 3D printer
    5. Upload and print the two PLA parts
    6. Take the three parts off and remove the supports
        *A small pair of pliers makes removing the supports easier
#### 3. Download the following .STL file:
    - KirigamiMesh.STL
#### 4. Print the TPU part
    1. In a 3D printing software, import the file downloaded in step 3
    
<img width="441" height="512" alt="Screenshot 2026-01-14 095607" src="https://github.com/user-attachments/assets/cee255b8-7e70-4f42-b3f9-70c94bf651f0" />
    
    2. Orient the files onto the printer bed as shown above
    3. Adjust the printer settings to allow TPU printing
        *Note: Some printers have trouble printing TPU. Look up the best parameters for printing TPU filament on your printer. 
    4. Load TPU filament into the 3D printer
    5. Upload and print the TPU parts
    6. Move to the Assembly instructions while printing

## Assembly

<img width="536" height="554" alt="Screenshot 2026-01-30 131508" src="https://github.com/user-attachments/assets/4eaf969a-0fff-4e4f-af34-5457a2e9c07d" />

1. Orient the servo motor onto the Panda housing as shown above. Use three screws and nuts to secure the servo to the housing. The nuts should be flush against the housing.

<img width="726" height="542" alt="Screenshot 2026-01-30 131525" src="https://github.com/user-attachments/assets/4cf78bf5-ad6f-4d4b-b0e1-87c90b5b793e" />

2. Insert the ball bearings as shown in the figure above. These should push into the housing and be held in place by friction.

<img width="731" height="544" alt="Screenshot 2026-01-30 131536" src="https://github.com/user-attachments/assets/5dc9c976-3bbe-4129-9ca0-b3717c92fdd7" />

3. Slide a REX standoff into each of the ball bearings. Secure the REX standoffs by installing collars on the side of the standoffs closest to the servo motor, as shown above. The collar can be fastened with the Allen wrench until it no longer moves when little force is applied. Do not over-tighten the collar; this will damage the REX standoffs. 

<img width="661" height="533" alt="Screenshot 2026-01-30 131550" src="https://github.com/user-attachments/assets/ac1944d6-3935-46fa-b1ec-bd518387ce82" />

4. Place the servo gear onto the servo motor. Then slide the 36-tooth gears onto the REX standoffs as shown above.

<img width="641" height="543" alt="Screenshot 2026-01-30 131603" src="https://github.com/user-attachments/assets/9934470c-c3cf-4067-a2ed-8efe111ee06e" />

5. Press the Angled Kiriposts onto the REX standoffs while paying careful attention to the orientation as shown above. The Kiriposts are designed for a tight fit, so this step will take some force.

<img width="653" height="542" alt="Screenshot 2026-01-30 131619" src="https://github.com/user-attachments/assets/5b098f5a-b547-4c3a-902c-fd285a8429b1" />

6. Fasten a collar on the bottom of each standoff as shown above.

<img width="624" height="545" alt="Screenshot 2026-01-30 131633" src="https://github.com/user-attachments/assets/ed75b08f-f3f9-4c6f-8cd9-d939a3f0ff45" />

7. Once the Kirigami sheet is done printing, remove it from the printer. There are two circular holes on the kirigami sheet that will fit onto the pegs located on the end of each Kiripost. The thicker part of the kirigami sheet should be closest to the servo motor, as shown above.

<img width="676" height="541" alt="Screenshot 2026-01-30 115538" src="https://github.com/user-attachments/assets/eb13a952-4861-4e5f-a565-5d545085c607" />

8. The assembly should now be complete as shown above. 

## Controlling and Powering the Robotic Kirispoon
Once the Robotic Kirispoon has been assembled, the next step is to figure out a method of power and control. Look at the **“Robotic Kirispoon: Method of Control & Power”**
document for examples on how to control and power the end-effector.

## Order List
Before clicking on the links in this list, there are some things to note:

    - Note: The left-most column shows the amount of material/parts needed for one spoon
    - Note: The two filament spools below contain enough filament for several spoons
    - Note: This list assumes that a printer is readily available
    - Note: The specific links listed below are the materials utilized in the Kirispoon research study; 
            it is possible to find the listed materials from other sources
    - Note: The “Link Cost” column shows the price of the product in the link address when this document was made, 
            NOT the cost for the amount of material needed for one spoon

**Total 3D-Printing Filament Cost**
|Material|g per Roll|Roll Cost|g per End-Effector|End-Effector Cost|
|---|---|---|---|---|
|[PLA filament(any color)](https://us.store.bambulab.com/products/pla-basic-filament?srsltid=AfmBOoo7uD4aZrYHzutCN6MeIgpNWLYGZYQ993Mq-DI3_bWOmJg2ZiCG&id=43045599215752)|1000g|$19.99|40g|$0.80|
|[TPU 85A filament](http://matterhackers.com/store/l/ninjatek-ninjaflex-tpu-filament/sk/MV0S1W9G?rcode=PMAX_GENPOPFIL&gad_source=1&gad_campaignid=20511284107&gbraid=0AAAAADtQ4S2UubuybuOmpFmA1j5LN21QE&gclid=CjwKCAiA95fLBhBPEiwATXUsxMzSsgJE8i6oHTvo0HaZhD9AmPCctGVFT8BKvup_QHG0nufGQGCBKRoCVewQAvD_BwE)|500g|$54.25|5g|$0.55|
|Total:|1500g|$74.24|45g|$1.35|

**Total Part Cost**
<table>
  <tr>
    <th># of Units</th>
    <th>Part/Material</th>
    <th>Unit Cost</th>
    <th>Cost</th>
  </tr>

  <tr>
    <td>1</td>
    <td><a href="https://www.gobilda.com/2000-series-dual-mode-servo-25-2-torque/">2000 Series Dual Mode Servo (25-2, Torque)</a></td>
    <td>$36.99</td>
    <td>$36.99</td>
  </tr>

  <tr>
    <td>1</td>
    <td><a href="https://www.gobilda.com/2305-series-brass-mod-0-8-servo-gear-25-tooth-spline-12-tooth/">2305 Series Brass, MOD 0.8, Servo Gear (25 Tooth Spline, 12 Tooth)</a></td>
    <td>$8.99</td>
    <td>$8.99</td>
  </tr>

  <tr>
    <td>2</td>
    <td><a href="https://www.gobilda.com/2303-series-steel-mod-0-8-pinion-gear-8mm-rex-bore-36-tooth/">2303 Series Steel, MOD 0.8 Pinion Gear (8mm REX Bore, 36 Tooth)</a></td>
    <td>$12.59</td>
    <td>$25.18</td>
  </tr>

  <tr>
    <td>1</td>
    <td><a href="https://www.gobilda.com/1611-series-flanged-ball-bearing-8mm-rex-id-x-14mm-od-5mm-thickness-2-pack/">1611 Series Flanged Ball Bearing (8mm REX ID x 14mm OD, 5mm Thickness) (2 Pack)</a></td>
    <td>$5.99</td>
    <td>$5.99</td>
  </tr>

  <tr>
    <td>2</td>
    <td><a href="https://www.gobilda.com/2920-series-steel-set-screw-collar-8mm-rex-bore-2-pack/">2920 Series Steel Set-Screw Collar (8mm REX Bore) (2 Pack)</a></td>
    <td>$5.99</td>
    <td>$11.98</td>
  </tr>

  <tr>
    <td>1</td>
    <td><a href="https://www.gobilda.com/1516-series-8mm-rex-standoff-m4-x-0-7mm-threads-40mm-length-4-pack/">1516 Series 8mm REX Standoff (M4 x 0.7mm Threads, 40mm Length) (4 Pack)</a></td>
    <td>$5.29</td>
    <td>$5.29</td>
  </tr>

  <tr>
    <td>1</td>
    <td><a href="https://www.gobilda.com/m4-x-0-7mm-zinc-plated-socket-head-screw-16mm-length/?sku=2800-0004-0016">Screws (M4, Length 16mm) (25 Pack)</a></td>
    <td>$3.79</td>
    <td>$3.79</td>
  </tr>

  <tr>
    <td>1</td>
    <td><a href="https://www.gobilda.com/m4-x-0-7mm-nylock-nut/?sku=2812-0004-0007">Nuts (M4) (25 Pack)</a></td>
    <td>$2.99</td>
    <td>$2.99</td>
  </tr>

  <tr>
    <td colspan="3">Total:</td>
    <td>$101.20</td>
  </tr>
</table>

**Total Cost of One Robotic End-Effector**
||3D-Printing Filament|Parts|Summed Total|
|---|---|---|---|
|Total Cost: |$1.35|$101.20|**$102.55**|



