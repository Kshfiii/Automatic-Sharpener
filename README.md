<img width="1086" height="648" alt="image" src="https://github.com/user-attachments/assets/638822ca-6772-4203-a94d-38b478f5635f" /># Automatic-Sharpener
Automatic Pencil Sharpener with Audio
A custom automatic pencil sharpener built around the Seeed Studio XIAO ESP32-C3. It spins an N20 DC motor to sharpen your pencil at the press of a button, and plays Chipi Chipi Chapa Chapa every single time. Because why not.

# About
This is a fully self-contained pencil sharpener with onboard LiPo charging, a boost-converted 6V motor supply, and a DFPlayer Mini for audio playback on a custom 48mm  PCB.
I built this because I wanted to get into PCB design using chips, so that I can confidently use them instead of dev boards in my future projects, all while making something fun and functional. On the hardware side, this project introuced me to audio functions and components.

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

#Component List

  1. Seeed Studio XIAO ESP32-C3
  2. TB6612FNG Motor Driver IC
  3. MT3608 Boost Converter IC
  4. AMS1117-5.0 LDO Regulator
  5. N20 DC Gear Motor (6V)
  6. DFPlayer Mini (DFR0299)
  7. 8Ω 1W Speaker
  8. Tactile Switch
  9. 3.7V LiPo Battery
  10. MicroSD Card

## Bill of Materials
| Component | Quantity | Est. Cost (USD) | Purchase Links | 
| :--- | :---: | :--- | :--- | 
| **Seeed Studio XIAO ESP32-C**| 1 | $11.50 | https://www.aliexpress.com/item/1005009855437801.html?spm=a2g0o.detail.0.0.478bn7wTn7wT8Q&mp=1&pdp_npi=6%40dis%21USD%21USD%2011.43%21USD%2010.93%21%21USD%2010.93%21%21%21%402101529317759519262254161e89ee%2112000050381761106%21ct%21PK%21-1%21%211%210%21 | 
| **TB6612FNG Motor Driver IC**| 1 | $21.00 | https://www.aliexpress.com/item/1005004242795745.html?spm=a2g0o.productlist.main.3.5b20Mpj6Mpj6Hg&algo_pvid=6cbbb9a8-da6f-44ac-a6e8-89cee95d2b1c&algo_exp_id=6cbbb9a8-da6f-44ac-a6e8-89cee95d2b1c-2&pdp_ext_f=%7B%22order%22%3A%22748%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%211.05%210.79%21%21%211.05%210.79%21%400b1bf20817759522282503307e4e10%2112000045514972230%21sea%21PK%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A12fde4ed%3Bm03_new_user%3A-29895&curPageLogUid=ALvT2Gu5hjvM&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005004242795745%7C_p_origin_prod%3A | 
| **MT3608 Boost Converter IC** | 1 | $1.20 |https://www.aliexpress.com/item/1005005845072975.html | 
| ** AMS1117-5.0 LDO Regulator ** | 1 | $2.50 | https://www.aliexpress.com/item/1005008684741327.html | 
| **  N20 DC Gear Motor (6V) ** | 1 | $2.50 | https://www.aliexpress.com/item/1005008684741327.html | 
| ** 8Ω 1W Speaker** | 1 | $2.50 | https://www.aliexpress.com/item/1005008684741327.html | 
| **  MicroSD Card** | 1 | $2.50 | https://www.aliexpress.com/item/1005008684741327.html | 
| ** 8Ω 1W Speaker** | 1 | $2.50 | https://www.aliexpress.com/item/1005008684741327.html | 
| ** Tactile Switch** | 1 | $0.50 | https://digilog.pk/products/3-7v-300mah-602030-rechargeable-lithium-polymer-battery-lipo-cells | 
| **Total Build Cost:** |  | **~$43.00** |

#
Happy Building :)

