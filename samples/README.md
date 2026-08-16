# How to build sample app

After setup west and activate zephyrproject venv ...

```bash
git clone https://github.com/mROS-base/mros-z.git # option: specify branch
export MROS_Z_DIR="${PWD}/mros-z"

cd "${MROS_Z_DIR}/samples"
west init -l manifest
west update
west build -b <board> -- -DZEPHYR_EXTRA_MODULES="${MROS_Z_DIR}"
```
