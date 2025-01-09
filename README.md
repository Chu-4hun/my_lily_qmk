## clone qmk 

```
git clone --depth 1 https://github.com/qmk/qmk_firmware.git
cd qmk_firmware
git submodule update --remote --init
```

## put files in `qmk_firmware\keyboards\lily58\keymaps\{any_folder_name}`

## build the firmware 

```
make lily58:via
```

![photo_2025-01-09_16-51-25](https://github.com/user-attachments/assets/58553cac-f286-48a4-b5df-e3e2d3308bf8)
