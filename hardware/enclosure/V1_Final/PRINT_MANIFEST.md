# Project MO V1 - Printing Manifest

Release: V1 Manufacturing Release Candidate  
Date: 12 September 2026  
Units: millimetres  
Preferred mesh format: 3MF

## Final printable parts

| 3MF file | Quantity |
|---|---:|
| `Project_MO_Main_Body_V1.3mf` | 1 |
| `Project_MO_FacePlate_V1.3mf` | 1 |
| `Project_MO_Display_Upper_Retainer_V1.3mf` | 1 |
| `Project_MO_Perfboard_Retainer_Upper_Left_V1.3mf` | 1 |
| `Project_MO_Perfboard_Retainer_Upper_Right_V1.3mf` | 1 |
| `Project_MO_Perfboard_Retainer_Lower_Left_V1.3mf` | 1 |
| `Project_MO_Perfboard_Retainer_Lower_Right_V1.3mf` | 1 |
| `Project_MO_DPad_Button_V1.3mf` | 1 |
| `Project_MO_DPad_Center_Pivot_V1.3mf` | 3 |
| `Project_MO_Large_Circular_Button_V1.3mf` | 1 |
| `Project_MO_Small_Circular_Button_V1.3mf` | 1 |
| `Project_MO_Triangle_Button_V1.3mf` | 1 |
| `Project_MO_Left_Arm_V1.3mf` | 1 |
| `Project_MO_Right_Arm_V1.3mf` | 1 |
| `Project_MO_Left_Leg_V1.3mf` | 1 |
| `Project_MO_Right_Leg_V1.3mf` | 1 |

**Unique 3MF files:** 16  
**Total printed pieces:** 18

## Editable source archive

`Fusion_Source/Project_MO_V1_Manufacturing_Release.f3z`

## Final interface notes

- Use every 3MF at 100% scale. Do not rescale after import.
- Main power-switch panel cutout: diameter 20.00 mm.
- Perfboard-retainer screw clearance holes: diameter 2.20 mm.
- FacePlate perfboard support-boss pilots: diameter 1.60 mm, 4.50 mm deep.
- Perfboard-retainer overlap onto the board: 2.929 mm.
- Display and FacePlate mounting clearance holes: diameter 3.40 mm.
- Print the D-pad center pivot three times; one additional spare is recommended.
- Confirm printer-specific PETG settings and purchased-component dimensions before production.

## Verification status

- Main Body, FacePlate, Display Upper Retainer, four perfboard retainers, four buttons and D-pad center pivot were re-imported and successfully sliced in PrusaSlicer.
- Left and right arms and legs were previously verified and have not changed since verification.
- The final Fusion assembly archive has been exported as F3Z.
