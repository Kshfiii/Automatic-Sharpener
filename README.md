# Automatic-Sharpener
Automatic Pencil Sharpener with Audio
A custom automatic pencil sharpener built around the Seeed Studio XIAO ESP32-C3. It spins an N20 DC motor to sharpen your pencil at the press of a button, and plays Chipi Chipi Chapa Chapa every single time. Because why not.

# About
This is a fully self-contained pencil sharpener with onboard LiPo charging, a boost-converted 6V motor supply, and a DFPlayer Mini for audio playback on a custom 48mm  PCB.
I built this because I wanted to get into PCB design using chips, so that I can confidently use them instead of dev boards in my future projects, all while making something fun and functional. On the hardware side, this project introuced me to audio functions and components.

# Project Snippets
<img width="525" height="642" alt="image" src="https://github.com/user-attachments/assets/e1c3c5ee-d6fc-4f94-a15b-d9815479da79" />
<img width="474" height="662" alt="image" src="https://github.com/user-attachments/assets/2518199c-6244-4a71-8018-3cd3d420cf71" />


<img width="1086" height="648" alt="image" src="https://github.com/user-attachments/assets/638822ca-6772-4203-a94d-38b478f5635f" />
<img width="746" height="740" alt="Capture" src="https://github.com/user-attachments/assets/994ea470-0a33-495c-9ec5-accb8222a40b" />
**<img width="668" height="647" alt="image" src="https://github.com/user-attachments/assets/e7f9eab7-3c38-4a99-b7d5-dc46a5a6a439" />**



# Assembly
To assemble the project open [Onshape](https://cad.onshape.com/documents/c32b9fc8cbec21775e9ce121/w/f4af039bfc6de04a7036ff46/e/f9eacd1e50641cdce73afd8e) In the 'Parts' tab, all parts have been labelled. Now open the Assembly and follow along. Put the assembled PCB between Part 1 and Part 2 and close them together. Put the motor in the rectangle placeholder in Part 2 and cover it with Part 3. After that, Attach Part 3 on the shaft of the motor. attach a sharpner on the underside of Part 4 and then attach Part 4 to Part 3. Lastly, attach Part 6 to the top of Part 3. All of this can be seen in the assembly. If confusion persists, you may contact me at: kasshafemman@gmail.com 

# Usage & Features

  1. Charge via the USB-C port on the XIAO ESP32-C3
  2. Power on using the slide switch
  3. Insert pencil into the sharpener
  4. Hold the tactile switch — motor spins and sharpening begins
  5. Chipi Chipi Chapa Chapa plays through the onboard speaker
  6. Release the switch — motor stops
  7. Take out round cartilage to clean, then insert it back

# Hardware Note — Power Architecture
Attach lipo batter to GND and BATT+ pins on the underside of the Esp32. 

# Firmware Files
Files and their functions:

sharpener.ino — Main loop, switch debounce, motor and audio control
config.h — Pin definitions and settings

# Component List

  1. Seeed Studio XIAO ESP32-C3
  2. TB6612FNG Motor Driver IC
  3. MT3608 Boost Converter IC
  4. AMS1117-5.0 LDO Regulator
  5. N20 DC Gear Motor (6V)
  6. DFPlayer Mini (YX5200)
  7. 8Ω 1W Speaker
  8. Tactile Switch
  9. 3.7V LiPo Battery
  10. MicroSD Card

## Bill of Materials
| Component | Quantity | Est. Cost (USD) | Purchase Links | 
| :--- | :---: | :--- | :--- | 
| **Seeed Studio XIAO ESP32-C**| 1 | $11.50 |[Link](https://www.aliexpress.com/item/1005009855437801.html?spm=a2g0o.detail.0.0.378eYyHPYyHPz5&mp=1&pdp_npi=6%40dis%21USD%21USD%2011.43%21USD%2010.93%21%21USD%2010.93%21%21%21%40212e508f17759555552744763e9213%2112000050381761106%21ct%21PK%21-1%21%211%210%21) | 
| **TB6612FNG Motor Driver IC**| 1 | $1.00 | [Link](https://www.aliexpress.com/item/1005004242795745.html?spm=a2g0o.detail.0.0.35a4meZvmeZvTw&mp=1&pdp_npi=6%40dis%21USD%21USD%201.05%21USD%200.79%21%21USD%200.79%21%21%21%40212e508f17759559005991372e9213%2112000045514972230%21ct%21PK%21-1%21%211%210%21&pdp_ext_f=%7B%22cart2PdpParams%22%3A%7B%22pdpBusinessMode%22%3A%22retail%22%7D%7D) | 
| **MT3608 Boost Converter IC** | 1 | $1.20 | [Link](https://www.aliexpress.com/item/1005008853748359.html?spm=a2g0o.detail.0.0.378eYyHPYyHPz5&mp=1&pdp_npi=6%40dis%21USD%21USD%202.73%21USD%202.23%21%21USD%202.23%21%21%21%40212e508f17759555552744763e9213%2112000046953414150%21ct%21PK%21-1%21%211%210%21) | 
| **AMS1117-5.0 LDO Regulator** | 1 | $2.50 | [Link](https://www.aliexpress.com/item/1005002487704059.html?spm=a2g0o.productlist.main.4.2196rhF6rhF6yu&aem_p4p_detail=20260411180108338023986275640001084750&algo_pvid=16ee6a6a-aaf1-43e2-94e3-907dfa61e2f0&algo_exp_id=16ee6a6a-aaf1-43e2-94e3-907dfa61e2f0-3&pdp_ext_f=%7B%22order%22%3A%223440%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%212.59%212.09%21%21%212.59%212.09%21%402151e6dc17759556679336660e6cfb%2112000020837902169%21sea%21PK%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A12fde4ed%3Bm03_new_user%3A-29895%3BpisId%3A5000000203713833&curPageLogUid=jNloBkgONfbe&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005002487704059%7C_p_origin_prod%3A&search_p4p_id=20260411180108338023986275640001084750_1) | 
| **N20 DC Gear Motor (6V)** | 1 | $2.12 | [Link](https://www.aliexpress.com/item/1005002008404532.html?spm=a2g0o.detail.0.0.4524cmDYcmDYY3&mp=1&pdp_npi=6%40dis%21USD%21USD%202.62%21USD%202.12%21%21USD%202.12%21%21%21%40212e508f17759554877634144e9213%2112000050750804097%21ct%21PK%21-1%21%211%210%21 ) | 
| **MicroSD Card** | 1 | $7.68 | [Link](https://www.aliexpress.com/item/1005007498167692.html?spm=a2g0o.detail.0.0.68ef44ec0VHUwW&mp=1&pdp_npi=6%40dis%21USD%21USD%208.18%21USD%207.68%21%21USD%207.68%21%21%21%40212e508f17759554348433604e9213%2112000041032084439%21ct%21PK%21-1%21%211%210%21) | 
| **8Ω 1W Speaker** | 1 | $1.70 | [Link](https://www.aliexpress.com/item/1005008660223571.html?spm=a2g0o.detail.0.0.173cVO5QVO5QJV&mp=1&pdp_npi=6%40dis%21USD%21USD%204.39%21USD%201.70%21%21USD%201.70%21%21%21%402151e6dc17759543473957645e6ce1%2112000046135720888%21ct%21PK%21-1%21%211%210%21) | 
| **Tactile Switch** | 1 | $0.50 | [Link](https://digilog.pk/products/12-x-12mm-x-7-5mm-push-button-in-pakistan-en?variant=44490991370518 )| 
| **PCB** | 1 | $5.00 | [Link](https://jlcpcb.com/)| 
| **DFPlayer Mini** | 1 | $5.50 | [Link](https://www.aliexpress.com/item/1005011540339952.html?spm=a2g0o.detail.0.0.4b1akxSAkxSANK&mp=1&pdp_npi=6%40dis%21USD%21USD%205.19%21USD%201.99%21%21USD%201.99%21%21%21%40212e520d17760065522677760e7f39%2112000055866842276%21ct%21PK%21-1%21%211%210%21)| 
| **Total Build Cost:** |  | **~$35.00** |

#
Happy Building :)

