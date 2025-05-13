/* Generated code for Python module 'scipy$constants$constants'
 * created by Nuitka version 2.6.9
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_scipy$constants$constants" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$constants$constants;
PyDictObject *moduledict_scipy$constants$constants;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[270];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[270];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("scipy.constants.constants"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 270; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$constants$constants(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 270; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 35
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_scipy$constants$constants_$$_Julian_year(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[178]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[178])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[178], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[178])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[178], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[178]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[178]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[178]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[269]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[269])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[269], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[269])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[269], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[269]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[269]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[269]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$__cd(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[28]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[28])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[28], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[28])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[28], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[28]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[28]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[28]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$__math(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[24]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[24])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[24], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[24])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[24], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[24]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[24]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[24]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$__np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[2]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[2])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[2], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[2])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[2], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[2]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[2]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[2]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_arcmin(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[168]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[168])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[168], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[168])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[168], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[168]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[168]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[168]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_arcsec(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[170]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[170])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[170], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[170])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[170], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[170]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[170]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[170]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_atm(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[201]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[201])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[201], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[201])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[201], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[201]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[201]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[201]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_au(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[196]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[196])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[196], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[196])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[196], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[196]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[196]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[196]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_blob(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[134]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[134])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[134], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[134])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[134], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[134]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[134]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[134]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_c(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[14]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[14])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[14], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[14])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[14], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[14]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[14]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[14]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_calorie_IT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[243]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[243])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[243], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[243])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[243], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[243]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[243]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[243]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_calorie_th(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[241]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[241])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[241], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[241])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[241], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[241]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[241]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[241]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_day(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[175]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[175])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[175], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[175])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[175], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[175]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[175]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[175]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_degree(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[166]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[166])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[166], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[166])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[166], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[166]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[166]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[166]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_degree_Fahrenheit(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[236]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[236])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[236], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[236])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[236], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[236]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[236]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[236]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_elementary_charge(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[107]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[107])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[107], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[107])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[107], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[107]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[107]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[107]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_foot(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[180]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[180])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[180], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[180])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[180], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[180]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[180]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[180]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_g(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[104]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[104])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[104], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[104])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[104], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[104]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[104]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[104]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_gallon_US(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[218]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[218])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[218], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[218])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[218], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[218]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[218]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[218]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_gallon_imp(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[226]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[226])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[226], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[226])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[226], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[226]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[226]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[226]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_grain(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[130]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[130])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[130], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[130])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[130], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[130]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[130]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[130]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_gram(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[127]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[127])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[127], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[127])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[127], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[127]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[127]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[127]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_h(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[97]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[97])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[97], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[97])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[97], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[97]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[97]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[97]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_hour(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[174]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[174])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[174], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[174])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[174], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[174]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[174]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[174]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_inch(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[179]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[179])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[179], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[179])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[179], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[179]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[179]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[179]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_mile(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[182]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[182])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[182], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[182])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[182], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[182]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[182]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[182]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_minute(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[173]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[173])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[173], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[173])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[173], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[173]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[173]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[173]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_nautical_mile(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[190]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[190])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[190], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[190])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[190], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[190]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[190]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[190]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_pi(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[30]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[30])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[30], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[30])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[30], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[30]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[30]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[30]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_pound(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[132]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[132])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[132], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[132])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[132], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[132]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[132]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[132]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_survey_foot(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[187]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[187])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[187], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[187])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[187], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[187]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[187]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[187]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_troy_ounce(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[148]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[148])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[148], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[148])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[148], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[148]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[148]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[148]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_yard(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[181]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[181])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[181], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[181])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[181], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[181]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[181]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[181]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$constants$constants_$$_zero_Celsius(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$constants$constants->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$constants$constants->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[4]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$constants$constants->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[4])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[4], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[4])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[4], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[4]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[4]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[4]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f8d27008771822e8de4b9c17d61634ae;
static PyCodeObject *code_objects_86adacee904f138ac7d21f6686a4cf3e;
static PyCodeObject *code_objects_578c9d378e8d0aa330b553a4debd1341;
static PyCodeObject *code_objects_59da75cbcd82d39585adfe03bf7a7aab;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[263]); CHECK_OBJECT(module_filename_obj);
    code_objects_f8d27008771822e8de4b9c17d61634ae = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[264], mod_consts[264], NULL, NULL, 0, 0, 0);
    code_objects_86adacee904f138ac7d21f6686a4cf3e = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[260], mod_consts[260], mod_consts[265], NULL, 3, 0, 0);
    code_objects_578c9d378e8d0aa330b553a4debd1341 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[261], mod_consts[261], mod_consts[266], NULL, 1, 0, 0);
    code_objects_59da75cbcd82d39585adfe03bf7a7aab = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[262], mod_consts[262], mod_consts[267], NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$constants$constants$$$function__1_convert_temperature(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$constants$constants$$$function__2_lambda2nu(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_scipy$constants$constants$$$function__3_nu2lambda(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_scipy$constants$constants$$$function__1_convert_temperature(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[0];
    PyObject *par_old_scale = python_pars[1];
    PyObject *par_new_scale = python_pars[2];
    PyObject *var_tempo = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$constants$constants$$$function__1_convert_temperature;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$constants$constants$$$function__1_convert_temperature = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_scipy$constants$constants$$$function__1_convert_temperature)) {
        Py_XDECREF(cache_frame_frame_scipy$constants$constants$$$function__1_convert_temperature);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$constants$constants$$$function__1_convert_temperature == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$constants$constants$$$function__1_convert_temperature = MAKE_FUNCTION_FRAME(tstate, code_objects_86adacee904f138ac7d21f6686a4cf3e, module_scipy$constants$constants, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_type_description == NULL);
    frame_frame_scipy$constants$constants$$$function__1_convert_temperature = cache_frame_frame_scipy$constants$constants$$$function__1_convert_temperature;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$constants$constants$$$function__1_convert_temperature);
    assert(Py_REFCNT(frame_frame_scipy$constants$constants$$$function__1_convert_temperature) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_1 = par_old_scale;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 218;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = module_var_accessor_scipy$constants$constants_$$__np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_1 = par_val;
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 219;
        tmp_add_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = module_var_accessor_scipy$constants$constants_$$_zero_Celsius(tstate);
        if (unlikely(tmp_add_expr_right_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_2 = par_old_scale;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 220;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[5];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = module_var_accessor_scipy$constants$constants_$$__np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_2 = par_val;
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 221;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[3], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_3 = par_old_scale;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 222;
        tmp_cmp_expr_left_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[6];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = module_var_accessor_scipy$constants$constants_$$__np(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[2]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_3 = par_val;
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 223;
        tmp_sub_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[3], tmp_args_element_value_3);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[7];
        tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = mod_consts[8];
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[9];
        tmp_add_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = module_var_accessor_scipy$constants$constants_$$_zero_Celsius(tstate);
        if (unlikely(tmp_add_expr_right_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_3;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_4 = par_old_scale;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 224;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[10];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_4 = module_var_accessor_scipy$constants$constants_$$__np(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[2]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_4 = par_val;
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 225;
        tmp_mult_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[3], tmp_args_element_value_4);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = mod_consts[8];
        tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = mod_consts[9];
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_4;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[11];
        CHECK_OBJECT(par_old_scale);
        tmp_mod_expr_right_1 = par_old_scale;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 227;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 227;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_5 = par_new_scale;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[0]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 231;
        tmp_cmp_expr_left_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[1];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_tempo);
        tmp_sub_expr_left_2 = var_tempo;
        tmp_sub_expr_right_2 = module_var_accessor_scipy$constants$constants_$$_zero_Celsius(tstate);
        if (unlikely(tmp_sub_expr_right_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 232;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_5;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_6 = par_new_scale;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[0]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 233;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 233;
        tmp_cmp_expr_left_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 233;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = mod_consts[5];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 233;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(var_tempo);
        tmp_assign_source_6 = var_tempo;
        assert(var_res == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_res = tmp_assign_source_6;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_7 = par_new_scale;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[0]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 235;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 235;
        tmp_cmp_expr_left_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 235;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = mod_consts[6];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 235;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(var_tempo);
        tmp_sub_expr_left_3 = var_tempo;
        tmp_sub_expr_right_3 = module_var_accessor_scipy$constants$constants_$$_zero_Celsius(tstate);
        if (unlikely(tmp_sub_expr_right_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = mod_consts[9];
        tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_3 = mod_consts[8];
        tmp_add_expr_left_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[7];
        tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 236;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_7;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_8 = par_new_scale;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[0]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 237;
        tmp_cmp_expr_left_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = mod_consts[10];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        CHECK_OBJECT(var_tempo);
        tmp_mult_expr_left_4 = var_tempo;
        tmp_mult_expr_right_4 = mod_consts[9];
        tmp_truediv_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[8];
        tmp_assign_source_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_8;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[12];
        CHECK_OBJECT(par_new_scale);
        tmp_mod_expr_right_2 = par_new_scale;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame.f_lineno = 240;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_state.exception_type = tmp_raise_type_2;
        exception_lineno = 240;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$constants$constants$$$function__1_convert_temperature, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$constants$constants$$$function__1_convert_temperature->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$constants$constants$$$function__1_convert_temperature, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$constants$constants$$$function__1_convert_temperature,
        type_description_1,
        par_val,
        par_old_scale,
        par_new_scale,
        var_tempo,
        var_res
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$constants$constants$$$function__1_convert_temperature == cache_frame_frame_scipy$constants$constants$$$function__1_convert_temperature) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$constants$constants$$$function__1_convert_temperature);
        cache_frame_frame_scipy$constants$constants$$$function__1_convert_temperature = NULL;
    }

    assertFrameObject(frame_frame_scipy$constants$constants$$$function__1_convert_temperature);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_res);
    tmp_return_value = var_res;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_tempo);
    var_tempo = NULL;
    CHECK_OBJECT(var_res);
    Py_DECREF(var_res);
    var_res = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_tempo);
    var_tempo = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_old_scale);
    Py_DECREF(par_old_scale);
    CHECK_OBJECT(par_new_scale);
    Py_DECREF(par_new_scale);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_old_scale);
    Py_DECREF(par_old_scale);
    CHECK_OBJECT(par_new_scale);
    Py_DECREF(par_new_scale);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$constants$constants$$$function__2_lambda2nu(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lambda_ = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$constants$constants$$$function__2_lambda2nu;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$constants$constants$$$function__2_lambda2nu = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$constants$constants$$$function__2_lambda2nu)) {
        Py_XDECREF(cache_frame_frame_scipy$constants$constants$$$function__2_lambda2nu);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$constants$constants$$$function__2_lambda2nu == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$constants$constants$$$function__2_lambda2nu = MAKE_FUNCTION_FRAME(tstate, code_objects_578c9d378e8d0aa330b553a4debd1341, module_scipy$constants$constants, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$constants$constants$$$function__2_lambda2nu->m_type_description == NULL);
    frame_frame_scipy$constants$constants$$$function__2_lambda2nu = cache_frame_frame_scipy$constants$constants$$$function__2_lambda2nu;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$constants$constants$$$function__2_lambda2nu);
    assert(Py_REFCNT(frame_frame_scipy$constants$constants$$$function__2_lambda2nu) == 2);

    // Framed code:
    {
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_truediv_expr_left_1 = module_var_accessor_scipy$constants$constants_$$_c(tstate);
        if (unlikely(tmp_truediv_expr_left_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[14]);
        }

        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 276;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = module_var_accessor_scipy$constants$constants_$$__np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 276;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_lambda_);
        tmp_args_element_value_1 = par_lambda_;
        frame_frame_scipy$constants$constants$$$function__2_lambda2nu->m_frame.f_lineno = 276;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 276;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 276;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$constants$constants$$$function__2_lambda2nu, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$constants$constants$$$function__2_lambda2nu->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$constants$constants$$$function__2_lambda2nu, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$constants$constants$$$function__2_lambda2nu,
        type_description_1,
        par_lambda_
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$constants$constants$$$function__2_lambda2nu == cache_frame_frame_scipy$constants$constants$$$function__2_lambda2nu) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$constants$constants$$$function__2_lambda2nu);
        cache_frame_frame_scipy$constants$constants$$$function__2_lambda2nu = NULL;
    }

    assertFrameObject(frame_frame_scipy$constants$constants$$$function__2_lambda2nu);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lambda_);
    Py_DECREF(par_lambda_);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lambda_);
    Py_DECREF(par_lambda_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_scipy$constants$constants$$$function__3_nu2lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_nu = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_scipy$constants$constants$$$function__3_nu2lambda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_scipy$constants$constants$$$function__3_nu2lambda = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_scipy$constants$constants$$$function__3_nu2lambda)) {
        Py_XDECREF(cache_frame_frame_scipy$constants$constants$$$function__3_nu2lambda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_scipy$constants$constants$$$function__3_nu2lambda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_scipy$constants$constants$$$function__3_nu2lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_59da75cbcd82d39585adfe03bf7a7aab, module_scipy$constants$constants, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_scipy$constants$constants$$$function__3_nu2lambda->m_type_description == NULL);
    frame_frame_scipy$constants$constants$$$function__3_nu2lambda = cache_frame_frame_scipy$constants$constants$$$function__3_nu2lambda;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$constants$constants$$$function__3_nu2lambda);
    assert(Py_REFCNT(frame_frame_scipy$constants$constants$$$function__3_nu2lambda) == 2);

    // Framed code:
    {
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_truediv_expr_left_1 = module_var_accessor_scipy$constants$constants_$$_c(tstate);
        if (unlikely(tmp_truediv_expr_left_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[14]);
        }

        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 305;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = module_var_accessor_scipy$constants$constants_$$__np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 305;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nu);
        tmp_args_element_value_1 = par_nu;
        frame_frame_scipy$constants$constants$$$function__3_nu2lambda->m_frame.f_lineno = 305;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$constants$constants$$$function__3_nu2lambda, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$constants$constants$$$function__3_nu2lambda->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$constants$constants$$$function__3_nu2lambda, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_scipy$constants$constants$$$function__3_nu2lambda,
        type_description_1,
        par_nu
    );


    // Release cached frame if used for exception.
    if (frame_frame_scipy$constants$constants$$$function__3_nu2lambda == cache_frame_frame_scipy$constants$constants$$$function__3_nu2lambda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_scipy$constants$constants$$$function__3_nu2lambda);
        cache_frame_frame_scipy$constants$constants$$$function__3_nu2lambda = NULL;
    }

    assertFrameObject(frame_frame_scipy$constants$constants$$$function__3_nu2lambda);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_nu);
    Py_DECREF(par_nu);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nu);
    Py_DECREF(par_nu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$constants$constants$$$function__1_convert_temperature(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$constants$constants$$$function__1_convert_temperature,
        mod_consts[260],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_86adacee904f138ac7d21f6686a4cf3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$constants$constants,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$constants$constants$$$function__2_lambda2nu(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$constants$constants$$$function__2_lambda2nu,
        mod_consts[261],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_578c9d378e8d0aa330b553a4debd1341,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$constants$constants,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$constants$constants$$$function__3_nu2lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$constants$constants$$$function__3_nu2lambda,
        mod_consts[262],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_59da75cbcd82d39585adfe03bf7a7aab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$constants$constants,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_scipy$constants$constants[] = {
    impl_scipy$constants$constants$$$function__1_convert_temperature,
    impl_scipy$constants$constants$$$function__2_lambda2nu,
    impl_scipy$constants$constants$$$function__3_nu2lambda,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    PyThreadState *tstate = PyThreadState_GET();

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_scipy$constants$constants);

    if (unlikely(offset == -1)) {
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = Nuitka_Function_ExtractCodeObjectDescription(tstate, function);

    PyObject *result = MAKE_TUPLE_EMPTY(tstate, 8);
    PyTuple_SET_ITEM(result, 0, Nuitka_PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM_IMMORTAL(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM_IMMORTAL(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_scipy$constants$constants,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_scipy$constants$constants,
        sizeof(function_table_scipy$constants$constants) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if defined(_NUITKA_MODULE) && 0
static char const *module_full_name = "scipy.constants.constants";
#endif

// Internal entry point for module code.
PyObject *modulecode_scipy$constants$constants(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy$constants$constants");

    // Store the module for future use.
    module_scipy$constants$constants = module;

    moduledict_scipy$constants$constants = MODULE_DICT(module_scipy$constants$constants);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();

#if PYTHON_VERSION >= 0x3c0
        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));
#endif

#if PYTHON_VERSION >= 0x3c0
        createGlobalConstants(tstate, real_module_name);
#else
        createGlobalConstants(tstate);
#endif
        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy$constants$constants: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy$constants$constants: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("scipy$constants$constants: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "scipy.constants.constants" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initscipy$constants$constants\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$constants$constants,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$constants$constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[268]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$constants$constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$constants$constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$constants$constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$constants$constants);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_scipy$constants$constants);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if defined(_NUITKA_MODULE) && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_assign_unpack_10__assign_source = NULL;
    PyObject *tmp_assign_unpack_11__assign_source = NULL;
    PyObject *tmp_assign_unpack_12__assign_source = NULL;
    PyObject *tmp_assign_unpack_13__assign_source = NULL;
    PyObject *tmp_assign_unpack_14__assign_source = NULL;
    PyObject *tmp_assign_unpack_15__assign_source = NULL;
    PyObject *tmp_assign_unpack_16__assign_source = NULL;
    PyObject *tmp_assign_unpack_17__assign_source = NULL;
    PyObject *tmp_assign_unpack_18__assign_source = NULL;
    PyObject *tmp_assign_unpack_19__assign_source = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_20__assign_source = NULL;
    PyObject *tmp_assign_unpack_22__assign_source = NULL;
    PyObject *tmp_assign_unpack_23__assign_source = NULL;
    PyObject *tmp_assign_unpack_25__assign_source = NULL;
    PyObject *tmp_assign_unpack_26__assign_source = NULL;
    PyObject *tmp_assign_unpack_27__assign_source = NULL;
    PyObject *tmp_assign_unpack_29__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_assign_unpack_31__assign_source = NULL;
    PyObject *tmp_assign_unpack_32__assign_source = NULL;
    PyObject *tmp_assign_unpack_34__assign_source = NULL;
    PyObject *tmp_assign_unpack_35__assign_source = NULL;
    PyObject *tmp_assign_unpack_3__assign_source = NULL;
    PyObject *tmp_assign_unpack_4__assign_source = NULL;
    PyObject *tmp_assign_unpack_5__assign_source = NULL;
    PyObject *tmp_assign_unpack_6__assign_source = NULL;
    PyObject *tmp_assign_unpack_7__assign_source = NULL;
    PyObject *tmp_assign_unpack_8__assign_source = NULL;
    PyObject *tmp_assign_unpack_9__assign_source = NULL;
    struct Nuitka_FrameObject *frame_frame_scipy$constants$constants;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_2);
    }
    frame_frame_scipy$constants$constants = MAKE_MODULE_FRAME(code_objects_f8d27008771822e8de4b9c17d61634ae, module_scipy$constants$constants);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$constants$constants);
    assert(Py_REFCNT(frame_frame_scipy$constants$constants) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_scipy$constants$constants_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[20], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_scipy$constants$constants_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[21], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[23];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$constants$constants;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 18;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[25];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$constants$constants;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[26];
        tmp_level_value_2 = const_int_pos_1;
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 19;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$constants$constants,
                mod_consts[27],
                const_int_0
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[29];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$constants$constants;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = const_int_0;
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 20;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = module_var_accessor_scipy$constants$constants_$$__math(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[24]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        tmp_add_expr_left_1 = const_int_pos_1;
        tmp_called_instance_1 = module_var_accessor_scipy$constants$constants_$$__math(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[24]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 24;
        tmp_add_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[31],
            PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[33];
        tmp_assign_source_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_9 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_10 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_10);
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        tmp_pow_expr_left_1 = mod_consts[33];
        tmp_pow_expr_right_1 = mod_consts[86];
        tmp_assign_source_36 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        tmp_pow_expr_left_2 = mod_consts[33];
        tmp_pow_expr_right_2 = mod_consts[88];
        tmp_assign_source_37 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 58;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts[90]);

        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_2__assign_source == NULL);
        tmp_assign_unpack_2__assign_source = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_39 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_40 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_40);
    }
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 59;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts[92]);

        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 60;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts[94]);

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 61;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts[96]);

        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_3__assign_source == NULL);
        tmp_assign_unpack_3__assign_source = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_44 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_45 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_45);
    }
    CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
    Py_DECREF(tmp_assign_unpack_3__assign_source);
    tmp_assign_unpack_3__assign_source = NULL;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_truediv_expr_left_2 = module_var_accessor_scipy$constants$constants_$$_h(tstate);
        if (unlikely(tmp_truediv_expr_left_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[97]);
        }

        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[33];
        tmp_mult_expr_right_1 = module_var_accessor_scipy$constants$constants_$$_pi(tstate);
        if (unlikely(tmp_mult_expr_right_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[30]);
        }

        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_46 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 63;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts[100]);

        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_4__assign_source == NULL);
        tmp_assign_unpack_4__assign_source = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
        tmp_assign_source_48 = tmp_assign_unpack_4__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
        tmp_assign_source_49 = tmp_assign_unpack_4__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_49);
    }
    CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
    Py_DECREF(tmp_assign_unpack_4__assign_source);
    tmp_assign_unpack_4__assign_source = NULL;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 64;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts[103]);

        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 65;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts[105]);

        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_5__assign_source == NULL);
        tmp_assign_unpack_5__assign_source = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_assign_source_52 = tmp_assign_unpack_5__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_assign_source_53 = tmp_assign_unpack_5__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_53);
    }
    CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
    Py_DECREF(tmp_assign_unpack_5__assign_source);
    tmp_assign_unpack_5__assign_source = NULL;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 66;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts[108]);

        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_6__assign_source == NULL);
        tmp_assign_unpack_6__assign_source = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_assign_source_55 = tmp_assign_unpack_6__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_assign_source_56 = tmp_assign_unpack_6__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_56);
    }
    CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
    Py_DECREF(tmp_assign_unpack_6__assign_source);
    tmp_assign_unpack_6__assign_source = NULL;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 67;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts[111]);

        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_7__assign_source == NULL);
        tmp_assign_unpack_7__assign_source = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
        tmp_assign_source_58 = tmp_assign_unpack_7__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
        tmp_assign_source_59 = tmp_assign_unpack_7__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_59);
    }
    CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
    Py_DECREF(tmp_assign_unpack_7__assign_source);
    tmp_assign_unpack_7__assign_source = NULL;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 68;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts[114]);

        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_8__assign_source == NULL);
        tmp_assign_unpack_8__assign_source = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_assign_source_61 = tmp_assign_unpack_8__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_assign_source_62 = tmp_assign_unpack_8__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_62);
    }
    CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
    Py_DECREF(tmp_assign_unpack_8__assign_source);
    tmp_assign_unpack_8__assign_source = NULL;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 69;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts[117]);

        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_9__assign_source == NULL);
        tmp_assign_unpack_9__assign_source = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
        tmp_assign_source_64 = tmp_assign_unpack_9__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
        tmp_assign_source_65 = tmp_assign_unpack_9__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_65);
    }
    CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
    Py_DECREF(tmp_assign_unpack_9__assign_source);
    tmp_assign_unpack_9__assign_source = NULL;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 70;
        tmp_assign_source_66 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts[120]);

        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_10__assign_source == NULL);
        tmp_assign_unpack_10__assign_source = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        CHECK_OBJECT(tmp_assign_unpack_10__assign_source);
        tmp_assign_source_67 = tmp_assign_unpack_10__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_assign_unpack_10__assign_source);
        tmp_assign_source_68 = tmp_assign_unpack_10__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_68);
    }
    CHECK_OBJECT(tmp_assign_unpack_10__assign_source);
    Py_DECREF(tmp_assign_unpack_10__assign_source);
    tmp_assign_unpack_10__assign_source = NULL;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 71;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_13, mod_consts[123]);

        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 72;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_14, mod_consts[125]);

        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[129];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        double tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_mult_expr_left_2 = 7000;
        tmp_mult_expr_right_2 = module_var_accessor_scipy$constants$constants_$$_grain(tstate);
        assert(!(tmp_mult_expr_right_2 == NULL));
        tmp_assign_source_74 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_2, tmp_mult_expr_left_2);
        assert(!(tmp_assign_source_74 == NULL));
        assert(tmp_assign_unpack_11__assign_source == NULL);
        tmp_assign_unpack_11__assign_source = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
        tmp_assign_source_75 = tmp_assign_unpack_11__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
        tmp_assign_source_76 = tmp_assign_unpack_11__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_76);
    }
    CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
    Py_DECREF(tmp_assign_unpack_11__assign_source);
    tmp_assign_unpack_11__assign_source = NULL;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_mult_expr_left_3 = module_var_accessor_scipy$constants$constants_$$_pound(tstate);
        if (unlikely(tmp_mult_expr_left_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
        }

        if (tmp_mult_expr_left_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = module_var_accessor_scipy$constants$constants_$$_g(tstate);
        if (unlikely(tmp_mult_expr_right_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[104]);
        }

        if (tmp_mult_expr_right_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_3 = mod_consts[133];
        tmp_assign_source_77 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_12__assign_source == NULL);
        tmp_assign_unpack_12__assign_source = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
        tmp_assign_source_78 = tmp_assign_unpack_12__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
        tmp_assign_source_79 = tmp_assign_unpack_12__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_79);
    }
    CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
    Py_DECREF(tmp_assign_unpack_12__assign_source);
    tmp_assign_unpack_12__assign_source = NULL;
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        tmp_truediv_expr_left_4 = module_var_accessor_scipy$constants$constants_$$_blob(tstate);
        if (unlikely(tmp_truediv_expr_left_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[134]);
        }

        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[136];
        tmp_assign_source_80 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_truediv_expr_left_5;
        PyObject *tmp_truediv_expr_right_5;
        tmp_truediv_expr_left_5 = module_var_accessor_scipy$constants$constants_$$_pound(tstate);
        if (unlikely(tmp_truediv_expr_left_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
        }

        if (tmp_truediv_expr_left_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_5 = mod_consts[138];
        tmp_assign_source_81 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_13__assign_source == NULL);
        tmp_assign_unpack_13__assign_source = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
        tmp_assign_source_82 = tmp_assign_unpack_13__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
        tmp_assign_source_83 = tmp_assign_unpack_13__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_83);
    }
    CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
    Py_DECREF(tmp_assign_unpack_13__assign_source);
    tmp_assign_unpack_13__assign_source = NULL;
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        tmp_mult_expr_left_4 = mod_consts[141];
        tmp_mult_expr_right_4 = module_var_accessor_scipy$constants$constants_$$_pound(tstate);
        if (unlikely(tmp_mult_expr_right_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
        }

        if (tmp_mult_expr_right_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_84 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        tmp_mult_expr_left_5 = mod_consts[143];
        tmp_mult_expr_right_5 = module_var_accessor_scipy$constants$constants_$$_pound(tstate);
        if (unlikely(tmp_mult_expr_right_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
        }

        if (tmp_mult_expr_right_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_85 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        tmp_mult_expr_left_6 = mod_consts[145];
        tmp_mult_expr_right_6 = module_var_accessor_scipy$constants$constants_$$_pound(tstate);
        if (unlikely(tmp_mult_expr_right_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
        }

        if (tmp_mult_expr_right_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_86 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        tmp_mult_expr_left_7 = mod_consts[147];
        tmp_mult_expr_right_7 = module_var_accessor_scipy$constants$constants_$$_grain(tstate);
        if (unlikely(tmp_mult_expr_right_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[130]);
        }

        if (tmp_mult_expr_right_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_87 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        tmp_mult_expr_left_8 = mod_consts[136];
        tmp_mult_expr_right_8 = module_var_accessor_scipy$constants$constants_$$_troy_ounce(tstate);
        assert(!(tmp_mult_expr_right_8 == NULL));
        tmp_assign_source_88 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[150];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 90;
        tmp_assign_source_90 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_15, mod_consts[152]);

        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_14__assign_source == NULL);
        tmp_assign_unpack_14__assign_source = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_91;
        CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
        tmp_assign_source_91 = tmp_assign_unpack_14__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
        tmp_assign_source_92 = tmp_assign_unpack_14__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_92);
    }
    CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
    Py_DECREF(tmp_assign_unpack_14__assign_source);
    tmp_assign_unpack_14__assign_source = NULL;
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 91;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_16, mod_consts[155]);

        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_15__assign_source == NULL);
        tmp_assign_unpack_15__assign_source = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
        tmp_assign_source_94 = tmp_assign_unpack_15__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
        tmp_assign_source_95 = tmp_assign_unpack_15__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_95);
    }
    CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
    Py_DECREF(tmp_assign_unpack_15__assign_source);
    tmp_assign_unpack_15__assign_source = NULL;
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 92;
        tmp_assign_source_96 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_17, mod_consts[158]);

        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_16__assign_source == NULL);
        tmp_assign_unpack_16__assign_source = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
        tmp_assign_source_97 = tmp_assign_unpack_16__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
        tmp_assign_source_98 = tmp_assign_unpack_16__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_98);
    }
    CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
    Py_DECREF(tmp_assign_unpack_16__assign_source);
    tmp_assign_unpack_16__assign_source = NULL;
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 93;
        tmp_assign_source_99 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_18, mod_consts[161]);

        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_17__assign_source == NULL);
        tmp_assign_unpack_17__assign_source = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_assign_source_100 = tmp_assign_unpack_17__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_assign_source_101 = tmp_assign_unpack_17__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_assign_source_102 = tmp_assign_unpack_17__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_102);
    }
    CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
    Py_DECREF(tmp_assign_unpack_17__assign_source);
    tmp_assign_unpack_17__assign_source = NULL;
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_truediv_expr_left_6;
        PyObject *tmp_truediv_expr_right_6;
        tmp_truediv_expr_left_6 = module_var_accessor_scipy$constants$constants_$$_pi(tstate);
        if (unlikely(tmp_truediv_expr_left_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[30]);
        }

        if (tmp_truediv_expr_left_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_6 = mod_consts[165];
        tmp_assign_source_103 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_truediv_expr_left_7;
        PyObject *tmp_truediv_expr_right_7;
        tmp_truediv_expr_left_7 = module_var_accessor_scipy$constants$constants_$$_degree(tstate);
        assert(!(tmp_truediv_expr_left_7 == NULL));
        tmp_truediv_expr_right_7 = mod_consts[167];
        tmp_assign_source_104 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_18__assign_source == NULL);
        tmp_assign_unpack_18__assign_source = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
        tmp_assign_source_105 = tmp_assign_unpack_18__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
        tmp_assign_source_106 = tmp_assign_unpack_18__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_106);
    }
    CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
    Py_DECREF(tmp_assign_unpack_18__assign_source);
    tmp_assign_unpack_18__assign_source = NULL;
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_truediv_expr_left_8;
        PyObject *tmp_truediv_expr_right_8;
        tmp_truediv_expr_left_8 = module_var_accessor_scipy$constants$constants_$$_arcmin(tstate);
        if (unlikely(tmp_truediv_expr_left_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[168]);
        }

        if (tmp_truediv_expr_left_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_8 = mod_consts[167];
        tmp_assign_source_107 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_19__assign_source == NULL);
        tmp_assign_unpack_19__assign_source = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
        tmp_assign_source_108 = tmp_assign_unpack_19__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
        tmp_assign_source_109 = tmp_assign_unpack_19__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_109);
    }
    CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
    Py_DECREF(tmp_assign_unpack_19__assign_source);
    tmp_assign_unpack_19__assign_source = NULL;
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        double tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        tmp_mult_expr_left_9 = 60;
        tmp_mult_expr_right_9 = module_var_accessor_scipy$constants$constants_$$_minute(tstate);
        assert(!(tmp_mult_expr_right_9 == NULL));
        tmp_assign_source_111 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_9, tmp_mult_expr_left_9);
        assert(!(tmp_assign_source_111 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        double tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        tmp_mult_expr_left_10 = 24;
        tmp_mult_expr_right_10 = module_var_accessor_scipy$constants$constants_$$_hour(tstate);
        assert(!(tmp_mult_expr_right_10 == NULL));
        tmp_assign_source_112 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_10, tmp_mult_expr_left_10);
        assert(!(tmp_assign_source_112 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        double tmp_mult_expr_left_11;
        PyObject *tmp_mult_expr_right_11;
        tmp_mult_expr_left_11 = 7;
        tmp_mult_expr_right_11 = module_var_accessor_scipy$constants$constants_$$_day(tstate);
        assert(!(tmp_mult_expr_right_11 == NULL));
        tmp_assign_source_113 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_11, tmp_mult_expr_left_11);
        assert(!(tmp_assign_source_113 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        double tmp_mult_expr_left_12;
        PyObject *tmp_mult_expr_right_12;
        tmp_mult_expr_left_12 = 365;
        tmp_mult_expr_right_12 = module_var_accessor_scipy$constants$constants_$$_day(tstate);
        assert(!(tmp_mult_expr_right_12 == NULL));
        tmp_assign_source_114 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_12, tmp_mult_expr_left_12);
        assert(!(tmp_assign_source_114 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        double tmp_mult_expr_left_13;
        PyObject *tmp_mult_expr_right_13;
        tmp_mult_expr_left_13 = 365.25;
        tmp_mult_expr_right_13 = module_var_accessor_scipy$constants$constants_$$_day(tstate);
        assert(!(tmp_mult_expr_right_13 == NULL));
        tmp_assign_source_115 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_13, tmp_mult_expr_left_13);
        assert(!(tmp_assign_source_115 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        double tmp_mult_expr_left_14;
        PyObject *tmp_mult_expr_right_14;
        tmp_mult_expr_left_14 = 12;
        tmp_mult_expr_right_14 = module_var_accessor_scipy$constants$constants_$$_inch(tstate);
        assert(!(tmp_mult_expr_right_14 == NULL));
        tmp_assign_source_117 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_14, tmp_mult_expr_left_14);
        assert(!(tmp_assign_source_117 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        double tmp_mult_expr_left_15;
        PyObject *tmp_mult_expr_right_15;
        tmp_mult_expr_left_15 = 3;
        tmp_mult_expr_right_15 = module_var_accessor_scipy$constants$constants_$$_foot(tstate);
        assert(!(tmp_mult_expr_right_15 == NULL));
        tmp_assign_source_118 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_15, tmp_mult_expr_left_15);
        assert(!(tmp_assign_source_118 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        double tmp_mult_expr_left_16;
        PyObject *tmp_mult_expr_right_16;
        tmp_mult_expr_left_16 = 1760;
        tmp_mult_expr_right_16 = module_var_accessor_scipy$constants$constants_$$_yard(tstate);
        assert(!(tmp_mult_expr_right_16 == NULL));
        tmp_assign_source_119 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_16, tmp_mult_expr_left_16);
        assert(!(tmp_assign_source_119 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_truediv_expr_left_9;
        double tmp_truediv_expr_right_9;
        tmp_truediv_expr_left_9 = module_var_accessor_scipy$constants$constants_$$_inch(tstate);
        assert(!(tmp_truediv_expr_left_9 == NULL));
        tmp_truediv_expr_right_9 = 1000;
        tmp_assign_source_120 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_CFLOAT(tmp_truediv_expr_left_9, tmp_truediv_expr_right_9);
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_truediv_expr_left_10;
        double tmp_truediv_expr_right_10;
        tmp_truediv_expr_left_10 = module_var_accessor_scipy$constants$constants_$$_inch(tstate);
        assert(!(tmp_truediv_expr_left_10 == NULL));
        tmp_truediv_expr_right_10 = 72;
        tmp_assign_source_121 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_CFLOAT(tmp_truediv_expr_left_10, tmp_truediv_expr_right_10);
        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_20__assign_source == NULL);
        tmp_assign_unpack_20__assign_source = tmp_assign_source_121;
    }
    {
        PyObject *tmp_assign_source_122;
        CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
        tmp_assign_source_122 = tmp_assign_unpack_20__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
        tmp_assign_source_123 = tmp_assign_unpack_20__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_123);
    }
    CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
    Py_DECREF(tmp_assign_unpack_20__assign_source);
    tmp_assign_unpack_20__assign_source = NULL;
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        double tmp_mult_expr_left_17;
        PyObject *tmp_mult_expr_right_17;
        tmp_mult_expr_left_17 = 5280;
        tmp_mult_expr_right_17 = module_var_accessor_scipy$constants$constants_$$_survey_foot(tstate);
        assert(!(tmp_mult_expr_right_17 == NULL));
        tmp_assign_source_125 = BINARY_OPERATION_MULT_OBJECT_FLOAT_CFLOAT(tmp_mult_expr_right_17, tmp_mult_expr_left_17);
        assert(!(tmp_assign_source_125 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[189];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_mult_expr_left_18;
        PyObject *tmp_mult_expr_right_18;
        tmp_mult_expr_left_18 = module_var_accessor_scipy$constants$constants_$$_Julian_year(tstate);
        if (unlikely(tmp_mult_expr_left_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[178]);
        }

        if (tmp_mult_expr_left_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_18 = module_var_accessor_scipy$constants$constants_$$_c(tstate);
        if (unlikely(tmp_mult_expr_right_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[14]);
        }

        if (tmp_mult_expr_right_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_132 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_18, tmp_mult_expr_right_18);
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_truediv_expr_left_11;
        PyObject *tmp_truediv_expr_right_11;
        tmp_truediv_expr_left_11 = module_var_accessor_scipy$constants$constants_$$_au(tstate);
        if (unlikely(tmp_truediv_expr_left_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[196]);
        }

        if (tmp_truediv_expr_left_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_11 = module_var_accessor_scipy$constants$constants_$$_arcsec(tstate);
        if (unlikely(tmp_truediv_expr_right_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[170]);
        }

        if (tmp_truediv_expr_right_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_133 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_11, tmp_truediv_expr_right_11);
        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = module_var_accessor_scipy$constants$constants_$$__cd(tstate);
        if (unlikely(tmp_called_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_frame_scipy$constants$constants->m_frame.f_lineno = 126;
        tmp_assign_source_134 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_19, mod_consts[200]);

        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_22__assign_source == NULL);
        tmp_assign_unpack_22__assign_source = tmp_assign_source_134;
    }
    {
        PyObject *tmp_assign_source_135;
        CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
        tmp_assign_source_135 = tmp_assign_unpack_22__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
        tmp_assign_source_136 = tmp_assign_unpack_22__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_136);
    }
    CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
    Py_DECREF(tmp_assign_unpack_22__assign_source);
    tmp_assign_unpack_22__assign_source = NULL;
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_truediv_expr_left_12;
        PyObject *tmp_truediv_expr_right_12;
        tmp_truediv_expr_left_12 = module_var_accessor_scipy$constants$constants_$$_atm(tstate);
        if (unlikely(tmp_truediv_expr_left_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[201]);
        }

        if (tmp_truediv_expr_left_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_12 = mod_consts[205];
        tmp_assign_source_138 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_12, tmp_truediv_expr_right_12);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_23__assign_source == NULL);
        tmp_assign_unpack_23__assign_source = tmp_assign_source_138;
    }
    {
        PyObject *tmp_assign_source_139;
        CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
        tmp_assign_source_139 = tmp_assign_unpack_23__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
        tmp_assign_source_140 = tmp_assign_unpack_23__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_140);
    }
    CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
    Py_DECREF(tmp_assign_unpack_23__assign_source);
    tmp_assign_unpack_23__assign_source = NULL;
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_truediv_expr_left_13;
        PyObject *tmp_truediv_expr_right_13;
        PyObject *tmp_mult_expr_left_19;
        PyObject *tmp_mult_expr_right_19;
        PyObject *tmp_mult_expr_left_20;
        PyObject *tmp_mult_expr_right_20;
        tmp_mult_expr_left_19 = module_var_accessor_scipy$constants$constants_$$_pound(tstate);
        if (unlikely(tmp_mult_expr_left_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
        }

        if (tmp_mult_expr_left_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_19 = module_var_accessor_scipy$constants$constants_$$_g(tstate);
        if (unlikely(tmp_mult_expr_right_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[104]);
        }

        if (tmp_mult_expr_right_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_19, tmp_mult_expr_right_19);
        if (tmp_truediv_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_20 = module_var_accessor_scipy$constants$constants_$$_inch(tstate);
        if (unlikely(tmp_mult_expr_left_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[179]);
        }

        if (tmp_mult_expr_left_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_truediv_expr_left_13);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_20 = module_var_accessor_scipy$constants$constants_$$_inch(tstate);
        if (unlikely(tmp_mult_expr_right_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[179]);
        }

        if (tmp_mult_expr_right_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_truediv_expr_left_13);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_20, tmp_mult_expr_right_20);
        if (tmp_truediv_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_truediv_expr_left_13);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_141 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_13, tmp_truediv_expr_right_13);
        Py_DECREF(tmp_truediv_expr_left_13);
        Py_DECREF(tmp_truediv_expr_right_13);
        if (tmp_assign_source_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_mult_expr_left_21;
        PyObject *tmp_mult_expr_right_21;
        PyObject *tmp_pow_expr_left_3;
        PyObject *tmp_pow_expr_right_3;
        tmp_mult_expr_left_21 = mod_consts[211];
        tmp_pow_expr_left_3 = module_var_accessor_scipy$constants$constants_$$_foot(tstate);
        if (unlikely(tmp_pow_expr_left_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[180]);
        }

        if (tmp_pow_expr_left_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_3 = mod_consts[33];
        tmp_mult_expr_right_21 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_3, tmp_pow_expr_right_3);
        if (tmp_mult_expr_right_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_143 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_21, tmp_mult_expr_right_21);
        Py_DECREF(tmp_mult_expr_right_21);
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_mult_expr_left_22;
        PyObject *tmp_mult_expr_right_22;
        PyObject *tmp_pow_expr_left_4;
        PyObject *tmp_pow_expr_right_4;
        tmp_mult_expr_left_22 = mod_consts[215];
        tmp_pow_expr_left_4 = module_var_accessor_scipy$constants$constants_$$_inch(tstate);
        if (unlikely(tmp_pow_expr_left_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[179]);
        }

        if (tmp_pow_expr_left_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_4 = mod_consts[216];
        tmp_mult_expr_right_22 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_4, tmp_pow_expr_right_4);
        if (tmp_mult_expr_right_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_146 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_22, tmp_mult_expr_right_22);
        Py_DECREF(tmp_mult_expr_right_22);
        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_25__assign_source == NULL);
        tmp_assign_unpack_25__assign_source = tmp_assign_source_146;
    }
    {
        PyObject *tmp_assign_source_147;
        CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
        tmp_assign_source_147 = tmp_assign_unpack_25__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
        tmp_assign_source_148 = tmp_assign_unpack_25__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_148);
    }
    CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
    Py_DECREF(tmp_assign_unpack_25__assign_source);
    tmp_assign_unpack_25__assign_source = NULL;
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_truediv_expr_left_14;
        PyObject *tmp_truediv_expr_right_14;
        tmp_truediv_expr_left_14 = module_var_accessor_scipy$constants$constants_$$_gallon_US(tstate);
        if (unlikely(tmp_truediv_expr_left_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[218]);
        }

        if (tmp_truediv_expr_left_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_14 = mod_consts[219];
        tmp_assign_source_149 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_14, tmp_truediv_expr_right_14);
        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_26__assign_source == NULL);
        tmp_assign_unpack_26__assign_source = tmp_assign_source_149;
    }
    {
        PyObject *tmp_assign_source_150;
        CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
        tmp_assign_source_150 = tmp_assign_unpack_26__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
        tmp_assign_source_151 = tmp_assign_unpack_26__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_151);
    }
    CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
    Py_DECREF(tmp_assign_unpack_26__assign_source);
    tmp_assign_unpack_26__assign_source = NULL;
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_mult_expr_left_23;
        PyObject *tmp_mult_expr_right_23;
        tmp_mult_expr_left_23 = mod_consts[222];
        tmp_mult_expr_right_23 = module_var_accessor_scipy$constants$constants_$$_gallon_US(tstate);
        if (unlikely(tmp_mult_expr_right_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[218]);
        }

        if (tmp_mult_expr_right_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_152 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_23, tmp_mult_expr_right_23);
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_27__assign_source == NULL);
        tmp_assign_unpack_27__assign_source = tmp_assign_source_152;
    }
    {
        PyObject *tmp_assign_source_153;
        CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
        tmp_assign_source_153 = tmp_assign_unpack_27__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
        tmp_assign_source_154 = tmp_assign_unpack_27__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_154);
    }
    CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
    Py_DECREF(tmp_assign_unpack_27__assign_source);
    tmp_assign_unpack_27__assign_source = NULL;
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_truediv_expr_left_15;
        double tmp_truediv_expr_right_15;
        tmp_truediv_expr_left_15 = module_var_accessor_scipy$constants$constants_$$_gallon_imp(tstate);
        assert(!(tmp_truediv_expr_left_15 == NULL));
        tmp_truediv_expr_right_15 = 160;
        tmp_assign_source_156 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_CFLOAT(tmp_truediv_expr_left_15, tmp_truediv_expr_right_15);
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_truediv_expr_left_16;
        PyObject *tmp_truediv_expr_right_16;
        tmp_truediv_expr_left_16 = mod_consts[50];
        tmp_truediv_expr_right_16 = module_var_accessor_scipy$constants$constants_$$_hour(tstate);
        if (unlikely(tmp_truediv_expr_right_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[174]);
        }

        if (tmp_truediv_expr_right_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_157 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_16, tmp_truediv_expr_right_16);
        if (tmp_assign_source_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_truediv_expr_left_17;
        PyObject *tmp_truediv_expr_right_17;
        tmp_truediv_expr_left_17 = module_var_accessor_scipy$constants$constants_$$_mile(tstate);
        if (unlikely(tmp_truediv_expr_left_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[182]);
        }

        if (tmp_truediv_expr_left_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_17 = module_var_accessor_scipy$constants$constants_$$_hour(tstate);
        if (unlikely(tmp_truediv_expr_right_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[174]);
        }

        if (tmp_truediv_expr_right_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_158 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_17, tmp_truediv_expr_right_17);
        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[230];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[230];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_truediv_expr_left_18;
        PyObject *tmp_truediv_expr_right_18;
        tmp_truediv_expr_left_18 = module_var_accessor_scipy$constants$constants_$$_nautical_mile(tstate);
        if (unlikely(tmp_truediv_expr_left_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[190]);
        }

        if (tmp_truediv_expr_left_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_18 = module_var_accessor_scipy$constants$constants_$$_hour(tstate);
        if (unlikely(tmp_truediv_expr_right_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[174]);
        }

        if (tmp_truediv_expr_right_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_161 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_18, tmp_truediv_expr_right_18);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[234];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[235];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = module_var_accessor_scipy$constants$constants_$$_elementary_charge(tstate);
        if (unlikely(tmp_assign_source_164 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[107]);
        }

        if (tmp_assign_source_164 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_29__assign_source == NULL);
        Py_INCREF(tmp_assign_source_164);
        tmp_assign_unpack_29__assign_source = tmp_assign_source_164;
    }
    {
        PyObject *tmp_assign_source_165;
        CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
        tmp_assign_source_165 = tmp_assign_unpack_29__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
        tmp_assign_source_166 = tmp_assign_unpack_29__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_166);
    }
    CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
    Py_DECREF(tmp_assign_unpack_29__assign_source);
    tmp_assign_unpack_29__assign_source = NULL;
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[239];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[239];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[244];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_truediv_expr_left_19;
        PyObject *tmp_truediv_expr_right_19;
        PyObject *tmp_mult_expr_left_24;
        PyObject *tmp_mult_expr_right_24;
        PyObject *tmp_mult_expr_left_25;
        PyObject *tmp_mult_expr_right_25;
        tmp_mult_expr_left_25 = module_var_accessor_scipy$constants$constants_$$_pound(tstate);
        if (unlikely(tmp_mult_expr_left_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
        }

        if (tmp_mult_expr_left_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_25 = module_var_accessor_scipy$constants$constants_$$_degree_Fahrenheit(tstate);
        if (unlikely(tmp_mult_expr_right_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[236]);
        }

        if (tmp_mult_expr_right_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_24 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_25, tmp_mult_expr_right_25);
        if (tmp_mult_expr_left_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_24 = module_var_accessor_scipy$constants$constants_$$_calorie_th(tstate);
        if (unlikely(tmp_mult_expr_right_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[241]);
        }

        if (tmp_mult_expr_right_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_mult_expr_left_24);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_19 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_24, tmp_mult_expr_right_24);
        Py_DECREF(tmp_mult_expr_left_24);
        if (tmp_truediv_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_19 = module_var_accessor_scipy$constants$constants_$$_gram(tstate);
        if (unlikely(tmp_truediv_expr_right_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[127]);
        }

        if (tmp_truediv_expr_right_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_truediv_expr_left_19);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_171 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_19, tmp_truediv_expr_right_19);
        Py_DECREF(tmp_truediv_expr_left_19);
        if (tmp_assign_source_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_truediv_expr_left_20;
        PyObject *tmp_truediv_expr_right_20;
        PyObject *tmp_mult_expr_left_26;
        PyObject *tmp_mult_expr_right_26;
        PyObject *tmp_mult_expr_left_27;
        PyObject *tmp_mult_expr_right_27;
        tmp_mult_expr_left_27 = module_var_accessor_scipy$constants$constants_$$_pound(tstate);
        if (unlikely(tmp_mult_expr_left_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
        }

        if (tmp_mult_expr_left_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_27 = module_var_accessor_scipy$constants$constants_$$_degree_Fahrenheit(tstate);
        if (unlikely(tmp_mult_expr_right_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[236]);
        }

        if (tmp_mult_expr_right_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_26 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_27, tmp_mult_expr_right_27);
        if (tmp_mult_expr_left_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_26 = module_var_accessor_scipy$constants$constants_$$_calorie_IT(tstate);
        if (unlikely(tmp_mult_expr_right_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[243]);
        }

        if (tmp_mult_expr_right_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_mult_expr_left_26);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_20 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_26, tmp_mult_expr_right_26);
        Py_DECREF(tmp_mult_expr_left_26);
        if (tmp_truediv_expr_left_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_20 = module_var_accessor_scipy$constants$constants_$$_gram(tstate);
        if (unlikely(tmp_truediv_expr_right_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[127]);
        }

        if (tmp_truediv_expr_right_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_truediv_expr_left_20);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_172 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_20, tmp_truediv_expr_right_20);
        Py_DECREF(tmp_truediv_expr_left_20);
        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_31__assign_source == NULL);
        tmp_assign_unpack_31__assign_source = tmp_assign_source_172;
    }
    {
        PyObject *tmp_assign_source_173;
        CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
        tmp_assign_source_173 = tmp_assign_unpack_31__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
        tmp_assign_source_174 = tmp_assign_unpack_31__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_174);
    }
    CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
    Py_DECREF(tmp_assign_unpack_31__assign_source);
    tmp_assign_unpack_31__assign_source = NULL;
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_mult_expr_left_28;
        PyObject *tmp_mult_expr_right_28;
        tmp_mult_expr_left_28 = mod_consts[46];
        tmp_mult_expr_right_28 = module_var_accessor_scipy$constants$constants_$$_calorie_th(tstate);
        if (unlikely(tmp_mult_expr_right_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[241]);
        }

        if (tmp_mult_expr_right_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_175 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_28, tmp_mult_expr_right_28);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_mult_expr_left_29;
        PyObject *tmp_mult_expr_right_29;
        PyObject *tmp_mult_expr_left_30;
        PyObject *tmp_mult_expr_right_30;
        PyObject *tmp_mult_expr_left_31;
        PyObject *tmp_mult_expr_right_31;
        tmp_mult_expr_left_31 = mod_consts[250];
        tmp_mult_expr_right_31 = module_var_accessor_scipy$constants$constants_$$_foot(tstate);
        if (unlikely(tmp_mult_expr_right_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[180]);
        }

        if (tmp_mult_expr_right_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_30 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_31, tmp_mult_expr_right_31);
        if (tmp_mult_expr_left_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_30 = module_var_accessor_scipy$constants$constants_$$_pound(tstate);
        if (unlikely(tmp_mult_expr_right_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
        }

        if (tmp_mult_expr_right_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_mult_expr_left_30);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_29 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_30, tmp_mult_expr_right_30);
        Py_DECREF(tmp_mult_expr_left_30);
        if (tmp_mult_expr_left_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_29 = module_var_accessor_scipy$constants$constants_$$_g(tstate);
        if (unlikely(tmp_mult_expr_right_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[104]);
        }

        if (tmp_mult_expr_right_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_mult_expr_left_29);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_176 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_29, tmp_mult_expr_right_29);
        Py_DECREF(tmp_mult_expr_left_29);
        if (tmp_assign_source_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_32__assign_source == NULL);
        tmp_assign_unpack_32__assign_source = tmp_assign_source_176;
    }
    {
        PyObject *tmp_assign_source_177;
        CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
        tmp_assign_source_177 = tmp_assign_unpack_32__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
        tmp_assign_source_178 = tmp_assign_unpack_32__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_178);
    }
    CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
    Py_DECREF(tmp_assign_unpack_32__assign_source);
    tmp_assign_unpack_32__assign_source = NULL;
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[253];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[253];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_mult_expr_left_32;
        PyObject *tmp_mult_expr_right_32;
        tmp_mult_expr_left_32 = module_var_accessor_scipy$constants$constants_$$_pound(tstate);
        if (unlikely(tmp_mult_expr_left_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
        }

        if (tmp_mult_expr_left_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_32 = module_var_accessor_scipy$constants$constants_$$_g(tstate);
        if (unlikely(tmp_mult_expr_right_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[104]);
        }

        if (tmp_mult_expr_right_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_181 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_32, tmp_mult_expr_right_32);
        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_34__assign_source == NULL);
        tmp_assign_unpack_34__assign_source = tmp_assign_source_181;
    }
    {
        PyObject *tmp_assign_source_182;
        CHECK_OBJECT(tmp_assign_unpack_34__assign_source);
        tmp_assign_source_182 = tmp_assign_unpack_34__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        CHECK_OBJECT(tmp_assign_unpack_34__assign_source);
        tmp_assign_source_183 = tmp_assign_unpack_34__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_183);
    }
    CHECK_OBJECT(tmp_assign_unpack_34__assign_source);
    Py_DECREF(tmp_assign_unpack_34__assign_source);
    tmp_assign_unpack_34__assign_source = NULL;
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = module_var_accessor_scipy$constants$constants_$$_g(tstate);
        if (unlikely(tmp_assign_source_184 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[104]);
        }

        if (tmp_assign_source_184 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_35__assign_source == NULL);
        Py_INCREF(tmp_assign_source_184);
        tmp_assign_unpack_35__assign_source = tmp_assign_source_184;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$constants$constants, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$constants$constants->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$constants$constants, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_scipy$constants$constants);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_185;
        CHECK_OBJECT(tmp_assign_unpack_35__assign_source);
        tmp_assign_source_185 = tmp_assign_unpack_35__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        CHECK_OBJECT(tmp_assign_unpack_35__assign_source);
        tmp_assign_source_186 = tmp_assign_unpack_35__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_186);
    }
    CHECK_OBJECT(tmp_assign_unpack_35__assign_source);
    Py_DECREF(tmp_assign_unpack_35__assign_source);
    tmp_assign_unpack_35__assign_source = NULL;
    {
        PyObject *tmp_assign_source_187;


        tmp_assign_source_187 = MAKE_FUNCTION_scipy$constants$constants$$$function__1_convert_temperature(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;


        tmp_assign_source_188 = MAKE_FUNCTION_scipy$constants$constants$$$function__2_lambda2nu(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;


        tmp_assign_source_189 = MAKE_FUNCTION_scipy$constants$constants$$$function__3_nu2lambda(tstate);

        UPDATE_STRING_DICT1(moduledict_scipy$constants$constants, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_189);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy$constants$constants", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "scipy.constants.constants" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_scipy$constants$constants);
    return module_scipy$constants$constants;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$constants, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$constants$constants", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
