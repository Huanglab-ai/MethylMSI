/* Generated code for Python module 'pandas$core$config_init'
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

/* The "module_pandas$core$config_init" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$config_init;
PyDictObject *moduledict_pandas$core$config_init;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[272];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[272];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("pandas.core.config_init"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 272; i++) {
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
void checkModuleConstants_pandas$core$config_init(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 272; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 68
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
static PyObject *module_var_accessor_pandas$core$config_init_$$_FutureWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[23]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[23])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[23], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[23])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[23], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[23]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[23]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[271]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[271])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[271], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[271])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[271], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[271]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[271]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[271]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$__deprecate_negative_int_max_colwidth(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[154]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[154])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[154], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[154])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[154], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[154]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[154]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[154]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$__ods_options(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[218]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$__xls_options(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[213]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[213])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[213], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[213])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[213], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[213]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[213]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[213]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$__xlsb_options(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[220]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[220])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[220], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[220])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[220], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[220]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[220]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[220]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$__xlsm_options(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[215]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[215])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[215], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[215])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[215], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[215]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[215]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[215]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$__xlsx_options(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[216])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[216], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[216])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[216], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[216]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_cf(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[4]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[4]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[4]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[4]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_chained_assignment(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[208]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[208])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[208], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[208])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[208], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[208]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[208]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[208]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_colheader_justify_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[97]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[97]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[97]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[97]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_float_format_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[93]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[93])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[93], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[93])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[93], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[93]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[93]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[93]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_get_ipython(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[17]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[17])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[17], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[17])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[17], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[17]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[17]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[17]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_is_bool(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[46])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[46], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[46])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[46], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[46]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_is_callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[47]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[47])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[47], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[47])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[47], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[47]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[47]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[47]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_is_instance_factory(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[48])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[48], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[48])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[48], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[48]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_is_int(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[49]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[49])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[49], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[49])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[49], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[49]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[49]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[49]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_is_nonnegative_int(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[50])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[50], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[50])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[50], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[50]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_is_one_of_factory(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[51])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[51], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[51])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[51], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[51]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_is_terminal(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[138]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[138])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[138], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[138])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[138], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[138]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[138]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[138]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_is_text(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[52]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[52])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[52], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[52])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[52], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[52]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[52]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[52]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_max_cols(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[157]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[157])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[157], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[157])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[157], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[157]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[157]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[157]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_max_colwidth_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[95]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[95])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[95], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[95])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[95], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[95]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[95]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[95]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_parquet_engine_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[243]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[243]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[243]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[243]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_chop_threshold_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[117]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[117])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[117], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[117])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[117], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[117]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[117]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[117]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_east_asian_width_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[103]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[103])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[103], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[103])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[103], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[103]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[103]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[103]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_expand_repr_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[99]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[99])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[99], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[99])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[99], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[99]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[99]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[99]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_html_border_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[111]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[111])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[111], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[111])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[111], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[111]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[111]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[111]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_html_use_mathjax_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[113]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[113])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[113], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[113])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[113], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[113]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[113]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[113]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_large_repr_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[123]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[123])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[123], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[123])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[123], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[123]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[123]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[123]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_latex_escape(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[127]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[127]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[127]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[127]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_latex_longtable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[129]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[129])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[129], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[129])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[129], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[129]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[129]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[129]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_latex_multicolumn(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[131]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[131])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[131], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[131])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[131], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[131]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[131]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[131]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_latex_multirow(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[135]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[135])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[135], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[135])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[135], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[135]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[135]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[135]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_latex_repr_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[107]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[107]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[107]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[107]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_max_categories_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[83]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[83])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[83], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[83])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[83], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[83]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[83]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[83]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_max_cols_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[81]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[81])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[81], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[81])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[81], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[81]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[81]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[81]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_max_info_cols_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[85]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[85])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[85], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[85])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[85], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[85]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[85]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[85]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_max_info_rows_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[121]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[121])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[121], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[121])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[121], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[121]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[121]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[121]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_max_rows_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[77]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[77])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[77], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[77])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[77], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[77]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[77]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[77]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_max_seq_items(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[119]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[119])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[119], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[119])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[119], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[119]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[119]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[119]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_memory_usage_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[125]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[125])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[125], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[125])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[125], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[125]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[125]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[125]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_min_rows_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[79]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[79])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[79], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[79])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[79], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[79]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[79]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[79]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_multi_sparse_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[91]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[91])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[91], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[91])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[91], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[91]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[91]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[91]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_nb_repr_h_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[87]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[87])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[87], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[87])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[87], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[87]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[87]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[87]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_pprint_nest_depth(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[89]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[89])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[89], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[89])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[89], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[89]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[89]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[89]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_precision_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[73]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[73])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[73], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[73])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[73], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[73]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[73]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[73]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_show_dimensions_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[101]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[101])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[101], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[101])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[101], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[101]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[101]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[101]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_table_schema_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[109]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[109])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[109], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[109])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[109], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[109]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[109]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[109]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_pc_width_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[115]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[115])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[115], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[115])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[115], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[115]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[115]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[115]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_plotting_backend_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[249]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[249])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[249], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[249])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[249], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[249]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[249]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[249]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_reader_engine_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[211]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[211])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[211], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[211])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[211], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[211]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[211]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[211]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_register_converter_cb(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[256]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[256])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[256], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[256])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[256], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[256]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[256]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[256]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_register_converter_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[255]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[255])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[255], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[255])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[255], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[255]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[255]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[255]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_register_plotting_backend_cb(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[250]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[250])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[250], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[250])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[250], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[250]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[250]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[250]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_table_schema_cb(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[136]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[136])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[136], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[136])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[136], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[136]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[136]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[136]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_tc_sim_interactive_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[192]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[192])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[192], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[192])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[192], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[192]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[192]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[192]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_use_bottleneck_cb(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[55]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[55])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[55], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[55])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[55], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[55]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[55]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[55]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_use_bottleneck_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[54]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[54])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[54], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[54])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[54], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[54]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[54]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[54]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_use_inf_as_na_cb(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[199]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[199])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[199], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[199])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[199], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[199]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[199]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[199]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_use_inf_as_na_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[198]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[198])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[198], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[198])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[198], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[198]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[198]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[198]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_use_inf_as_null_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[196]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[196]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[196]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[196]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_use_numba_cb(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[61]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[61])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[61], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[61])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[61], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[61]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[61]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[61]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_use_numba_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[60]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[60])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[60], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[60])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[60], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[60]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[60]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[60]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_use_numexpr_cb(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[58]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[58])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[58], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[58])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[58], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[58]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[58]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[58]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_use_numexpr_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[57]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[57])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[57], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[57])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[57], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[57]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[57]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[57]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[20]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[20])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[20], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[20])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[20], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[20]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[20]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[20]);
    }

    return result;
}

static PyObject *module_var_accessor_pandas$core$config_init_$$_writer_engine_doc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pandas$core$config_init->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pandas$core$config_init->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[238]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pandas$core$config_init->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[238])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[238], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[238])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[238], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[238]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[238]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[238]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_70637205cd34329ddbebe69b847722b2;
static PyCodeObject *code_objects_1ffbf24a58ca4499cffa7f38eaf12cdf;
static PyCodeObject *code_objects_e1219043f23f11dee3ced9b948a5e95f;
static PyCodeObject *code_objects_852ae131a74529588c3bc28b116cd330;
static PyCodeObject *code_objects_7fe01e0756e23cc2960b4178d20dd247;
static PyCodeObject *code_objects_4911cb15e9dea53f35a4436feee20c4a;
static PyCodeObject *code_objects_dbfb697f9b4fac0fb79d8779c93c0fa5;
static PyCodeObject *code_objects_25c5294659546cb201365426c3f3a712;
static PyCodeObject *code_objects_4fcc135c23c10b9947f6ed423835ac61;
static PyCodeObject *code_objects_23040af445b31e6ca45b80cbbc89b155;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[259]); CHECK_OBJECT(module_filename_obj);
    code_objects_70637205cd34329ddbebe69b847722b2 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[260], mod_consts[260], NULL, NULL, 0, 0, 0);
    code_objects_1ffbf24a58ca4499cffa7f38eaf12cdf = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[154], mod_consts[154], mod_consts[261], NULL, 1, 0, 0);
    code_objects_e1219043f23f11dee3ced9b948a5e95f = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[262], NULL, 0, 0, 0);
    code_objects_852ae131a74529588c3bc28b116cd330 = MAKE_CODE_OBJECT(module_filename_obj, 664, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[256], mod_consts[256], mod_consts[263], NULL, 1, 0, 0);
    code_objects_7fe01e0756e23cc2960b4178d20dd247 = MAKE_CODE_OBJECT(module_filename_obj, 638, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[250], mod_consts[250], mod_consts[264], NULL, 1, 0, 0);
    code_objects_4911cb15e9dea53f35a4436feee20c4a = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[265], NULL, 1, 0, 0);
    code_objects_dbfb697f9b4fac0fb79d8779c93c0fa5 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[266], NULL, 1, 0, 0);
    code_objects_25c5294659546cb201365426c3f3a712 = MAKE_CODE_OBJECT(module_filename_obj, 474, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[199], mod_consts[199], mod_consts[267], NULL, 1, 0, 0);
    code_objects_4fcc135c23c10b9947f6ed423835ac61 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[268], NULL, 1, 0, 0);
    code_objects_23040af445b31e6ca45b80cbbc89b155 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[269], NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__1_use_bottleneck_cb(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__2_use_numexpr_cb(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__3_use_numba_cb(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__4_table_schema_cb(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__5_is_terminal(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__7_use_inf_as_na_cb(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__8_register_plotting_backend_cb(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__9_register_converter_cb(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_pandas$core$config_init$$$function__1_use_bottleneck_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_nanops = NULL;
    struct Nuitka_FrameObject *frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb)) {
        Py_XDECREF(cache_frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb = MAKE_FUNCTION_FRAME(tstate, code_objects_dbfb697f9b4fac0fb79d8779c93c0fa5, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb->m_type_description == NULL);
    frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb = cache_frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb);
    assert(Py_REFCNT(frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = const_int_0;
        frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb->m_frame.f_lineno = 36;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[2],
                const_int_0
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_nanops == NULL);
        var_nanops = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_nanops);
        tmp_expression_value_1 = var_nanops;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb->m_frame.f_lineno = 38;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb->m_frame.f_lineno = 38;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb,
        type_description_1,
        par_key,
        var_nanops
    );


    // Release cached frame if used for exception.
    if (frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb == cache_frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb);
        cache_frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb = NULL;
    }

    assertFrameObject(frame_frame_pandas$core$config_init$$$function__1_use_bottleneck_cb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_nanops);
    Py_DECREF(var_nanops);
    var_nanops = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_nanops);
    var_nanops = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__2_use_numexpr_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_expressions = NULL;
    struct Nuitka_FrameObject *frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb)) {
        Py_XDECREF(cache_frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb = MAKE_FUNCTION_FRAME(tstate, code_objects_23040af445b31e6ca45b80cbbc89b155, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb->m_type_description == NULL);
    frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb = cache_frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb);
    assert(Py_REFCNT(frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[7];
        tmp_level_value_1 = const_int_0;
        frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb->m_frame.f_lineno = 50;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[8],
                const_int_0
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_expressions == NULL);
        var_expressions = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_expressions);
        tmp_expression_value_1 = var_expressions;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb->m_frame.f_lineno = 52;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb->m_frame.f_lineno = 52;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb,
        type_description_1,
        par_key,
        var_expressions
    );


    // Release cached frame if used for exception.
    if (frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb == cache_frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb);
        cache_frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb = NULL;
    }

    assertFrameObject(frame_frame_pandas$core$config_init$$$function__2_use_numexpr_cb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_expressions);
    Py_DECREF(var_expressions);
    var_expressions = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_expressions);
    var_expressions = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__3_use_numba_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_numba_ = NULL;
    struct Nuitka_FrameObject *frame_frame_pandas$core$config_init$$$function__3_use_numba_cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_pandas$core$config_init$$$function__3_use_numba_cb = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_pandas$core$config_init$$$function__3_use_numba_cb)) {
        Py_XDECREF(cache_frame_frame_pandas$core$config_init$$$function__3_use_numba_cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_pandas$core$config_init$$$function__3_use_numba_cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_pandas$core$config_init$$$function__3_use_numba_cb = MAKE_FUNCTION_FRAME(tstate, code_objects_4fcc135c23c10b9947f6ed423835ac61, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_pandas$core$config_init$$$function__3_use_numba_cb->m_type_description == NULL);
    frame_frame_pandas$core$config_init$$$function__3_use_numba_cb = cache_frame_frame_pandas$core$config_init$$$function__3_use_numba_cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_pandas$core$config_init$$$function__3_use_numba_cb);
    assert(Py_REFCNT(frame_frame_pandas$core$config_init$$$function__3_use_numba_cb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[10];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[11];
        tmp_level_value_1 = const_int_0;
        frame_frame_pandas$core$config_init$$$function__3_use_numba_cb->m_frame.f_lineno = 64;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[12],
                const_int_0
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_numba_ == NULL);
        var_numba_ = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_numba_);
        tmp_expression_value_1 = var_numba_;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_frame_pandas$core$config_init$$$function__3_use_numba_cb->m_frame.f_lineno = 66;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_pandas$core$config_init$$$function__3_use_numba_cb->m_frame.f_lineno = 66;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init$$$function__3_use_numba_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_pandas$core$config_init$$$function__3_use_numba_cb->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init$$$function__3_use_numba_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_pandas$core$config_init$$$function__3_use_numba_cb,
        type_description_1,
        par_key,
        var_numba_
    );


    // Release cached frame if used for exception.
    if (frame_frame_pandas$core$config_init$$$function__3_use_numba_cb == cache_frame_frame_pandas$core$config_init$$$function__3_use_numba_cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_pandas$core$config_init$$$function__3_use_numba_cb);
        cache_frame_frame_pandas$core$config_init$$$function__3_use_numba_cb = NULL;
    }

    assertFrameObject(frame_frame_pandas$core$config_init$$$function__3_use_numba_cb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_numba_);
    Py_DECREF(var_numba_);
    var_numba_ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_numba_);
    var_numba_ = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__4_table_schema_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var__enable_data_resource_formatter = NULL;
    struct Nuitka_FrameObject *frame_frame_pandas$core$config_init$$$function__4_table_schema_cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_pandas$core$config_init$$$function__4_table_schema_cb = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_pandas$core$config_init$$$function__4_table_schema_cb)) {
        Py_XDECREF(cache_frame_frame_pandas$core$config_init$$$function__4_table_schema_cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_pandas$core$config_init$$$function__4_table_schema_cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_pandas$core$config_init$$$function__4_table_schema_cb = MAKE_FUNCTION_FRAME(tstate, code_objects_4911cb15e9dea53f35a4436feee20c4a, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_pandas$core$config_init$$$function__4_table_schema_cb->m_type_description == NULL);
    frame_frame_pandas$core$config_init$$$function__4_table_schema_cb = cache_frame_frame_pandas$core$config_init$$$function__4_table_schema_cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_pandas$core$config_init$$$function__4_table_schema_cb);
    assert(Py_REFCNT(frame_frame_pandas$core$config_init$$$function__4_table_schema_cb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[14];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[15];
        tmp_level_value_1 = const_int_0;
        frame_frame_pandas$core$config_init$$$function__4_table_schema_cb->m_frame.f_lineno = 317;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 317;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[16],
                const_int_0
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 317;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var__enable_data_resource_formatter == NULL);
        var__enable_data_resource_formatter = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var__enable_data_resource_formatter);
        tmp_called_value_1 = var__enable_data_resource_formatter;
        tmp_called_instance_1 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 319;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_frame_pandas$core$config_init$$$function__4_table_schema_cb->m_frame.f_lineno = 319;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 319;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_frame_pandas$core$config_init$$$function__4_table_schema_cb->m_frame.f_lineno = 319;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 319;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init$$$function__4_table_schema_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_pandas$core$config_init$$$function__4_table_schema_cb->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init$$$function__4_table_schema_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_pandas$core$config_init$$$function__4_table_schema_cb,
        type_description_1,
        par_key,
        var__enable_data_resource_formatter
    );


    // Release cached frame if used for exception.
    if (frame_frame_pandas$core$config_init$$$function__4_table_schema_cb == cache_frame_frame_pandas$core$config_init$$$function__4_table_schema_cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_pandas$core$config_init$$$function__4_table_schema_cb);
        cache_frame_frame_pandas$core$config_init$$$function__4_table_schema_cb = NULL;
    }

    assertFrameObject(frame_frame_pandas$core$config_init$$$function__4_table_schema_cb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__enable_data_resource_formatter);
    Py_DECREF(var__enable_data_resource_formatter);
    var__enable_data_resource_formatter = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var__enable_data_resource_formatter);
    var__enable_data_resource_formatter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__5_is_terminal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_ip = NULL;
    struct Nuitka_FrameObject *frame_frame_pandas$core$config_init$$$function__5_is_terminal;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_pandas$core$config_init$$$function__5_is_terminal = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_pandas$core$config_init$$$function__5_is_terminal)) {
        Py_XDECREF(cache_frame_frame_pandas$core$config_init$$$function__5_is_terminal);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_pandas$core$config_init$$$function__5_is_terminal == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_pandas$core$config_init$$$function__5_is_terminal = MAKE_FUNCTION_FRAME(tstate, code_objects_e1219043f23f11dee3ced9b948a5e95f, module_pandas$core$config_init, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_pandas$core$config_init$$$function__5_is_terminal->m_type_description == NULL);
    frame_frame_pandas$core$config_init$$$function__5_is_terminal = cache_frame_frame_pandas$core$config_init$$$function__5_is_terminal;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_pandas$core$config_init$$$function__5_is_terminal);
    assert(Py_REFCNT(frame_frame_pandas$core$config_init$$$function__5_is_terminal) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = module_var_accessor_pandas$core$config_init_$$_get_ipython(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 330;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        frame_frame_pandas$core$config_init$$$function__5_is_terminal->m_frame.f_lineno = 330;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 330;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        assert(var_ip == NULL);
        var_ip = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init$$$function__5_is_terminal, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init$$$function__5_is_terminal, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 328;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init$$$function__5_is_terminal->m_frame)) {
            frame_frame_pandas$core$config_init$$$function__5_is_terminal->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "o";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_ip);
        tmp_expression_value_1 = var_ip;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[18]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 334;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init$$$function__5_is_terminal, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_pandas$core$config_init$$$function__5_is_terminal->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init$$$function__5_is_terminal, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_pandas$core$config_init$$$function__5_is_terminal,
        type_description_1,
        var_ip
    );


    // Release cached frame if used for exception.
    if (frame_frame_pandas$core$config_init$$$function__5_is_terminal == cache_frame_frame_pandas$core$config_init$$$function__5_is_terminal) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_pandas$core$config_init$$$function__5_is_terminal);
        cache_frame_frame_pandas$core$config_init$$$function__5_is_terminal = NULL;
    }

    assertFrameObject(frame_frame_pandas$core$config_init$$$function__5_is_terminal);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ip);
    var_ip = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_ip);
    var_ip = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_value = NULL;
    struct Nuitka_FrameObject *frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth)) {
        Py_XDECREF(cache_frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth = MAKE_FUNCTION_FRAME(tstate, code_objects_1ffbf24a58ca4499cffa7f38eaf12cdf, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth->m_type_description == NULL);
    frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth = cache_frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth);
    assert(Py_REFCNT(frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth->m_frame.f_lineno = 365;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 365;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_1 = var_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_2 = var_value;
        tmp_cmp_expr_right_2 = const_int_0;
        tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = module_var_accessor_pandas$core$config_init_$$_warnings(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[20]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[22];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = module_var_accessor_pandas$core$config_init_$$_FutureWarning(tstate);
        if (unlikely(tmp_tuple_element_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[23]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 371;
            type_description_1 = "oo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[24]);
        frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth->m_frame.f_lineno = 367;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth,
        type_description_1,
        par_key,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth == cache_frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth);
        cache_frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth = NULL;
    }

    assertFrameObject(frame_frame_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_value);
    Py_DECREF(var_value);
    var_value = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_value);
    var_value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__7_use_inf_as_na_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var__use_inf_as_na = NULL;
    struct Nuitka_FrameObject *frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb)) {
        Py_XDECREF(cache_frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb = MAKE_FUNCTION_FRAME(tstate, code_objects_25c5294659546cb201365426c3f3a712, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb->m_type_description == NULL);
    frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb = cache_frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb);
    assert(Py_REFCNT(frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[25];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[26];
        tmp_level_value_1 = const_int_0;
        frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb->m_frame.f_lineno = 475;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 475;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[27],
                const_int_0
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 475;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var__use_inf_as_na == NULL);
        var__use_inf_as_na = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var__use_inf_as_na);
        tmp_called_value_1 = var__use_inf_as_na;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb->m_frame.f_lineno = 477;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 477;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb,
        type_description_1,
        par_key,
        var__use_inf_as_na
    );


    // Release cached frame if used for exception.
    if (frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb == cache_frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb);
        cache_frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb = NULL;
    }

    assertFrameObject(frame_frame_pandas$core$config_init$$$function__7_use_inf_as_na_cb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__use_inf_as_na);
    Py_DECREF(var__use_inf_as_na);
    var__use_inf_as_na = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var__use_inf_as_na);
    var__use_inf_as_na = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__8_register_plotting_backend_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var__get_plot_backend = NULL;
    struct Nuitka_FrameObject *frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb)) {
        Py_XDECREF(cache_frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb = MAKE_FUNCTION_FRAME(tstate, code_objects_7fe01e0756e23cc2960b4178d20dd247, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb->m_type_description == NULL);
    frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb = cache_frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb);
    assert(Py_REFCNT(frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        tmp_cmp_expr_right_1 = mod_consts[28];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 639;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[29];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[30];
        tmp_level_value_1 = const_int_0;
        frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb->m_frame.f_lineno = 642;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 642;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[31],
                const_int_0
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 642;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var__get_plot_backend == NULL);
        var__get_plot_backend = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var__get_plot_backend);
        tmp_called_value_1 = var__get_plot_backend;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb->m_frame.f_lineno = 644;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 644;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb,
        type_description_1,
        par_key,
        var__get_plot_backend
    );


    // Release cached frame if used for exception.
    if (frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb == cache_frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb);
        cache_frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb = NULL;
    }

    assertFrameObject(frame_frame_pandas$core$config_init$$$function__8_register_plotting_backend_cb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var__get_plot_backend);
    var__get_plot_backend = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var__get_plot_backend);
    var__get_plot_backend = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__9_register_converter_cb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_deregister_matplotlib_converters = NULL;
    PyObject *var_register_matplotlib_converters = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_frame_pandas$core$config_init$$$function__9_register_converter_cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_pandas$core$config_init$$$function__9_register_converter_cb = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_pandas$core$config_init$$$function__9_register_converter_cb)) {
        Py_XDECREF(cache_frame_frame_pandas$core$config_init$$$function__9_register_converter_cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_pandas$core$config_init$$$function__9_register_converter_cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_pandas$core$config_init$$$function__9_register_converter_cb = MAKE_FUNCTION_FRAME(tstate, code_objects_852ae131a74529588c3bc28b116cd330, module_pandas$core$config_init, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_pandas$core$config_init$$$function__9_register_converter_cb->m_type_description == NULL);
    frame_frame_pandas$core$config_init$$$function__9_register_converter_cb = cache_frame_frame_pandas$core$config_init$$$function__9_register_converter_cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_pandas$core$config_init$$$function__9_register_converter_cb);
    assert(Py_REFCNT(frame_frame_pandas$core$config_init$$$function__9_register_converter_cb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[32];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[33];
        tmp_level_value_1 = const_int_0;
        frame_frame_pandas$core$config_init$$$function__9_register_converter_cb->m_frame.f_lineno = 665;
        tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 665;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[34],
                const_int_0
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[34]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 665;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_deregister_matplotlib_converters == NULL);
        var_deregister_matplotlib_converters = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[35],
                const_int_0
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[35]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 665;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_register_matplotlib_converters == NULL);
        var_register_matplotlib_converters = tmp_assign_source_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_instance_1 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 670;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_frame_pandas$core$config_init$$$function__9_register_converter_cb->m_frame.f_lineno = 670;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 670;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 670;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_register_matplotlib_converters);
        tmp_called_value_1 = var_register_matplotlib_converters;
        frame_frame_pandas$core$config_init$$$function__9_register_converter_cb->m_frame.f_lineno = 671;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 671;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_deregister_matplotlib_converters);
        tmp_called_value_2 = var_deregister_matplotlib_converters;
        frame_frame_pandas$core$config_init$$$function__9_register_converter_cb->m_frame.f_lineno = 673;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 673;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init$$$function__9_register_converter_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_pandas$core$config_init$$$function__9_register_converter_cb->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init$$$function__9_register_converter_cb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_pandas$core$config_init$$$function__9_register_converter_cb,
        type_description_1,
        par_key,
        var_deregister_matplotlib_converters,
        var_register_matplotlib_converters
    );


    // Release cached frame if used for exception.
    if (frame_frame_pandas$core$config_init$$$function__9_register_converter_cb == cache_frame_frame_pandas$core$config_init$$$function__9_register_converter_cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_pandas$core$config_init$$$function__9_register_converter_cb);
        cache_frame_frame_pandas$core$config_init$$$function__9_register_converter_cb = NULL;
    }

    assertFrameObject(frame_frame_pandas$core$config_init$$$function__9_register_converter_cb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_deregister_matplotlib_converters);
    Py_DECREF(var_deregister_matplotlib_converters);
    var_deregister_matplotlib_converters = NULL;
    CHECK_OBJECT(var_register_matplotlib_converters);
    Py_DECREF(var_register_matplotlib_converters);
    var_register_matplotlib_converters = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_deregister_matplotlib_converters);
    var_deregister_matplotlib_converters = NULL;
    Py_XDECREF(var_register_matplotlib_converters);
    var_register_matplotlib_converters = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__1_use_bottleneck_cb(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__1_use_bottleneck_cb,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dbfb697f9b4fac0fb79d8779c93c0fa5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__2_use_numexpr_cb(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__2_use_numexpr_cb,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_23040af445b31e6ca45b80cbbc89b155,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__3_use_numba_cb(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__3_use_numba_cb,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4fcc135c23c10b9947f6ed423835ac61,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__4_table_schema_cb(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__4_table_schema_cb,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4911cb15e9dea53f35a4436feee20c4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__5_is_terminal(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__5_is_terminal,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e1219043f23f11dee3ced9b948a5e95f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$config_init,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1ffbf24a58ca4499cffa7f38eaf12cdf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__7_use_inf_as_na_cb(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__7_use_inf_as_na_cb,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_25c5294659546cb201365426c3f3a712,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__8_register_plotting_backend_cb(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__8_register_plotting_backend_cb,
        mod_consts[250],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7fe01e0756e23cc2960b4178d20dd247,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__9_register_converter_cb(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__9_register_converter_cb,
        mod_consts[256],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_852ae131a74529588c3bc28b116cd330,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
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

static function_impl_code const function_table_pandas$core$config_init[] = {
    impl_pandas$core$config_init$$$function__1_use_bottleneck_cb,
    impl_pandas$core$config_init$$$function__2_use_numexpr_cb,
    impl_pandas$core$config_init$$$function__3_use_numba_cb,
    impl_pandas$core$config_init$$$function__4_table_schema_cb,
    impl_pandas$core$config_init$$$function__5_is_terminal,
    impl_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth,
    impl_pandas$core$config_init$$$function__7_use_inf_as_na_cb,
    impl_pandas$core$config_init$$$function__8_register_plotting_backend_cb,
    impl_pandas$core$config_init$$$function__9_register_converter_cb,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_pandas$core$config_init);

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
        module_pandas$core$config_init,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_pandas$core$config_init,
        sizeof(function_table_pandas$core$config_init) / sizeof(function_impl_code)
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
static char const *module_full_name = "pandas.core.config_init";
#endif

// Internal entry point for module code.
PyObject *modulecode_pandas$core$config_init(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas$core$config_init");

    // Store the module for future use.
    module_pandas$core$config_init = module;

    moduledict_pandas$core$config_init = MODULE_DICT(module_pandas$core$config_init);

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
        PRINT_STRING("pandas$core$config_init: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas$core$config_init: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pandas$core$config_init: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pandas.core.config_init" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpandas$core$config_init\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$config_init,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$config_init,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[270]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$config_init,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$config_init,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$config_init,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$config_init);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pandas$core$config_init);
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

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_with_10__enter = NULL;
    PyObject *tmp_with_10__exit = NULL;
    nuitka_bool tmp_with_10__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_10__source = NULL;
    PyObject *tmp_with_11__enter = NULL;
    PyObject *tmp_with_11__exit = NULL;
    nuitka_bool tmp_with_11__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_11__source = NULL;
    PyObject *tmp_with_12__enter = NULL;
    PyObject *tmp_with_12__exit = NULL;
    nuitka_bool tmp_with_12__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_12__source = NULL;
    PyObject *tmp_with_13__enter = NULL;
    PyObject *tmp_with_13__exit = NULL;
    nuitka_bool tmp_with_13__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_13__source = NULL;
    PyObject *tmp_with_14__enter = NULL;
    PyObject *tmp_with_14__exit = NULL;
    nuitka_bool tmp_with_14__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_14__source = NULL;
    PyObject *tmp_with_15__enter = NULL;
    PyObject *tmp_with_15__exit = NULL;
    nuitka_bool tmp_with_15__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_15__source = NULL;
    PyObject *tmp_with_16__enter = NULL;
    PyObject *tmp_with_16__exit = NULL;
    nuitka_bool tmp_with_16__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_16__source = NULL;
    PyObject *tmp_with_17__enter = NULL;
    PyObject *tmp_with_17__exit = NULL;
    nuitka_bool tmp_with_17__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_17__source = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    PyObject *tmp_with_3__enter = NULL;
    PyObject *tmp_with_3__exit = NULL;
    nuitka_bool tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_3__source = NULL;
    PyObject *tmp_with_4__enter = NULL;
    PyObject *tmp_with_4__exit = NULL;
    nuitka_bool tmp_with_4__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_4__source = NULL;
    PyObject *tmp_with_5__enter = NULL;
    PyObject *tmp_with_5__exit = NULL;
    nuitka_bool tmp_with_5__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_5__source = NULL;
    PyObject *tmp_with_6__enter = NULL;
    PyObject *tmp_with_6__exit = NULL;
    nuitka_bool tmp_with_6__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_6__source = NULL;
    PyObject *tmp_with_7__enter = NULL;
    PyObject *tmp_with_7__exit = NULL;
    nuitka_bool tmp_with_7__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_7__source = NULL;
    PyObject *tmp_with_8__enter = NULL;
    PyObject *tmp_with_8__exit = NULL;
    nuitka_bool tmp_with_8__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_8__source = NULL;
    PyObject *tmp_with_9__enter = NULL;
    PyObject *tmp_with_9__exit = NULL;
    nuitka_bool tmp_with_9__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_9__source = NULL;
    struct Nuitka_FrameObject *frame_frame_pandas$core$config_init;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    struct Nuitka_ExceptionStackItem exception_preserved_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    struct Nuitka_ExceptionStackItem exception_preserved_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    struct Nuitka_ExceptionStackItem exception_preserved_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    struct Nuitka_ExceptionStackItem exception_preserved_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    struct Nuitka_ExceptionStackItem exception_preserved_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    struct Nuitka_ExceptionStackItem exception_preserved_10;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    struct Nuitka_ExceptionStackItem exception_preserved_11;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    struct Nuitka_ExceptionStackItem exception_preserved_12;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    struct Nuitka_ExceptionStackItem exception_preserved_13;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    struct Nuitka_ExceptionStackItem exception_preserved_14;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    struct Nuitka_ExceptionStackItem exception_preserved_15;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    struct Nuitka_ExceptionStackItem exception_preserved_16;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    struct Nuitka_ExceptionStackItem exception_preserved_17;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_2);
    }
    frame_frame_pandas$core$config_init = MAKE_MODULE_FRAME(code_objects_70637205cd34329ddbebe69b847722b2, module_pandas$core$config_init);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_pandas$core$config_init);
    assert(Py_REFCNT(frame_frame_pandas$core$config_init) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_pandas$core$config_init_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[39], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_pandas$core$config_init_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[40], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[20];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 12;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[42];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = const_int_0;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 14;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[43],
                const_int_0
            );
        } else {
            tmp_import_name_from_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[44],
                const_int_0
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[44]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[42];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[45];
        tmp_level_value_3 = const_int_0;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 15;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[46],
                const_int_0
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[46]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[47],
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[47]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[48],
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[48]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[49],
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[49]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[50],
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[50]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[51],
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[51]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[52],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[52]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_13);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_pandas$core$config_init$$$function__1_use_bottleneck_cb(tstate);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_pandas$core$config_init$$$function__2_use_numexpr_cb(tstate);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_pandas$core$config_init$$$function__3_use_numba_cb(tstate);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_19);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 69;

            goto try_except_handler_2;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 69;
        tmp_assign_source_20 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, mod_consts[64]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;

            goto try_except_handler_2;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 69;
        tmp_assign_source_21 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_22 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[65]);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_assign_source_23;
        tmp_assign_source_23 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_23;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_3 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 70;

            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[66]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;

            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[67];
        tmp_kw_call_arg_value_1_1 = Py_True;
        tmp_kw_call_arg_value_2_1 = module_var_accessor_pandas$core$config_init_$$_use_bottleneck_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[54]);
        }

        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_2);

            exception_lineno = 73;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_1 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_2);

            exception_lineno = 74;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_1 = module_var_accessor_pandas$core$config_init_$$_use_bottleneck_cb(tstate);
        if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[55]);
        }

        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_2);

            exception_lineno = 75;

            goto try_except_handler_4;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 70;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[68]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_expression_value_4 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 77;

            goto try_except_handler_4;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[66]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;

            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[69];
        tmp_kw_call_arg_value_1_2 = Py_True;
        tmp_kw_call_arg_value_2_2 = module_var_accessor_pandas$core$config_init_$$_use_numexpr_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[57]);
        }

        if (tmp_kw_call_arg_value_2_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_3);

            exception_lineno = 78;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_2 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_3);

            exception_lineno = 78;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_2 = module_var_accessor_pandas$core$config_init_$$_use_numexpr_cb(tstate);
        if (unlikely(tmp_kw_call_dict_value_1_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[58]);
        }

        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_3);

            exception_lineno = 78;

            goto try_except_handler_4;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 77;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[68]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_arg_value_2_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        tmp_expression_value_5 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 80;

            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[66]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 80;

            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[70];
        tmp_kw_call_arg_value_1_3 = Py_False;
        tmp_kw_call_arg_value_2_3 = module_var_accessor_pandas$core$config_init_$$_use_numba_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[60]);
        }

        if (tmp_kw_call_arg_value_2_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_3 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_3 = module_var_accessor_pandas$core$config_init_$$_use_numba_cb(tstate);
        if (unlikely(tmp_kw_call_dict_value_1_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[61]);
        }

        if (tmp_kw_call_dict_value_1_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;

            goto try_except_handler_4;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 80;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[68]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 80;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_2);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
        } else if (exception_keeper_lineno_2 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_2);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_24;
        tmp_assign_source_24 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(tstate);
        tmp_args_element_value_2 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_2); 
        tmp_args_element_value_3 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;

            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;

            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 81;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 69;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 81;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts[71]);

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

            exception_lineno = 81;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 81;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts[71]);

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;


        tmp_assign_source_57 = MAKE_FUNCTION_pandas$core$config_init$$$function__4_table_schema_cb(tstate);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(tstate, mod_consts[137]);


        tmp_assign_source_58 = MAKE_FUNCTION_pandas$core$config_init$$$function__5_is_terminal(tstate, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_58);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 340;

            goto try_except_handler_6;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 340;
        tmp_assign_source_59 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[139], 0)
        );

        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 340;

            goto try_except_handler_6;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_6 = tmp_with_2__source;
        tmp_called_value_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, mod_consts[64]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 340;

            goto try_except_handler_6;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 340;
        tmp_assign_source_60 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 340;

            goto try_except_handler_6;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_7 = tmp_with_2__source;
        tmp_assign_source_61 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, mod_consts[65]);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 340;

            goto try_except_handler_6;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_61;
    }
    {
        nuitka_bool tmp_assign_source_62;
        tmp_assign_source_62 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_62;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_arg_value_2_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        tmp_expression_value_8 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 341;

            goto try_except_handler_8;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[66]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 341;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_4 = mod_consts[140];
        tmp_kw_call_arg_value_1_4 = mod_consts[141];
        tmp_kw_call_arg_value_2_4 = module_var_accessor_pandas$core$config_init_$$_pc_precision_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[73]);
        }

        if (tmp_kw_call_arg_value_2_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_9);

            exception_lineno = 341;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_4 = module_var_accessor_pandas$core$config_init_$$_is_nonnegative_int(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_9);

            exception_lineno = 341;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 341;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 341;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_kw_call_arg_value_2_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_list_element_1;
        tmp_expression_value_9 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 342;

            goto try_except_handler_8;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[66]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 342;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_5 = mod_consts[143];
        tmp_kw_call_arg_value_1_5 = Py_None;
        tmp_kw_call_arg_value_2_5 = module_var_accessor_pandas$core$config_init_$$_float_format_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[93]);
        }

        if (tmp_kw_call_arg_value_2_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_10);

            exception_lineno = 345;

            goto try_except_handler_8;
        }
        tmp_called_value_11 = module_var_accessor_pandas$core$config_init_$$_is_one_of_factory(tstate);
        if (unlikely(tmp_called_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_10);

            exception_lineno = 346;

            goto try_except_handler_8;
        }
        tmp_list_element_1 = Py_None;
        tmp_args_element_value_4 = MAKE_LIST_EMPTY(tstate, 2);
        PyList_SET_ITEM0(tmp_args_element_value_4, 0, tmp_list_element_1);
        tmp_list_element_1 = module_var_accessor_pandas$core$config_init_$$_is_callable(tstate);
        if (unlikely(tmp_list_element_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[47]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 346;

            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_args_element_value_4, 1, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_4);
        goto try_except_handler_8;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 346;
        tmp_kw_call_dict_value_0_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 346;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 342;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 342;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_10 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 348;

            goto try_except_handler_8;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[66]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 348;

            goto try_except_handler_8;
        }
        tmp_kw_call_value_0_1 = module_var_accessor_pandas$core$config_init_$$_is_int(tstate);
        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_12);

            exception_lineno = 348;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 348;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_8 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_12, mod_consts[144], kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 348;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_arg_value_1_6;
        PyObject *tmp_kw_call_arg_value_2_6;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_called_value_14;
        tmp_expression_value_11 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 349;

            goto try_except_handler_8;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[66]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 349;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_6 = mod_consts[145];
        tmp_kw_call_arg_value_1_6 = mod_consts[146];
        tmp_kw_call_arg_value_2_6 = module_var_accessor_pandas$core$config_init_$$_pc_max_info_rows_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[121]);
        }

        if (tmp_kw_call_arg_value_2_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_13);

            exception_lineno = 352;

            goto try_except_handler_8;
        }
        tmp_called_value_14 = module_var_accessor_pandas$core$config_init_$$_is_instance_factory(tstate);
        if (unlikely(tmp_called_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_13);

            exception_lineno = 353;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 353;
        tmp_kw_call_dict_value_0_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_14, mod_consts[147]);

        if (tmp_kw_call_dict_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 353;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 349;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_6, tmp_kw_call_arg_value_2_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_13, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 349;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_arg_value_1_7;
        PyObject *tmp_kw_call_arg_value_2_7;
        PyObject *tmp_kw_call_dict_value_0_7;
        tmp_expression_value_12 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 355;

            goto try_except_handler_8;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[66]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 355;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_7 = mod_consts[148];
        tmp_kw_call_arg_value_1_7 = mod_consts[149];
        tmp_kw_call_arg_value_2_7 = module_var_accessor_pandas$core$config_init_$$_pc_max_rows_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[77]);
        }

        if (tmp_kw_call_arg_value_2_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_15);

            exception_lineno = 355;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_7 = module_var_accessor_pandas$core$config_init_$$_is_nonnegative_int(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_15);

            exception_lineno = 355;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 355;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_7, tmp_kw_call_arg_value_2_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 355;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_11;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_arg_value_1_8;
        PyObject *tmp_kw_call_arg_value_2_8;
        PyObject *tmp_kw_call_dict_value_0_8;
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_arg_element_1;
        tmp_expression_value_13 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 356;

            goto try_except_handler_8;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[66]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 356;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_8 = mod_consts[150];
        tmp_kw_call_arg_value_1_8 = mod_consts[151];
        tmp_kw_call_arg_value_2_8 = module_var_accessor_pandas$core$config_init_$$_pc_min_rows_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[79]);
        }

        if (tmp_kw_call_arg_value_2_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_16);

            exception_lineno = 359;

            goto try_except_handler_8;
        }
        tmp_called_value_17 = module_var_accessor_pandas$core$config_init_$$_is_instance_factory(tstate);
        if (unlikely(tmp_called_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_16);

            exception_lineno = 360;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_1 = MAKE_LIST2(tstate, (PyObject *)Py_TYPE(Py_None),(PyObject *)&PyLong_Type);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 360;
        tmp_kw_call_dict_value_0_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_kw_call_dict_value_0_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 360;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 356;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8, tmp_kw_call_arg_value_1_8, tmp_kw_call_arg_value_2_8};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_8};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_16, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_dict_value_0_8);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 356;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_kw_call_arg_value_1_9;
        PyObject *tmp_kw_call_arg_value_2_9;
        PyObject *tmp_kw_call_dict_value_0_9;
        tmp_expression_value_14 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 362;

            goto try_except_handler_8;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[66]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 362;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_9 = mod_consts[152];
        tmp_kw_call_arg_value_1_9 = mod_consts[153];
        tmp_kw_call_arg_value_2_9 = module_var_accessor_pandas$core$config_init_$$_pc_max_categories_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[83]);
        }

        if (tmp_kw_call_arg_value_2_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_18);

            exception_lineno = 362;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_9 = module_var_accessor_pandas$core$config_init_$$_is_int(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_kw_call_dict_value_0_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_18);

            exception_lineno = 362;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 362;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9, tmp_kw_call_arg_value_1_9, tmp_kw_call_arg_value_2_9};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_9};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_18, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 362;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_63;


        tmp_assign_source_63 = MAKE_FUNCTION_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth(tstate);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_63);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_13;
        PyObject *tmp_kw_call_arg_value_0_10;
        PyObject *tmp_kw_call_arg_value_1_10;
        PyObject *tmp_kw_call_arg_value_2_10;
        PyObject *tmp_kw_call_dict_value_0_10;
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_kw_call_dict_value_1_4;
        tmp_expression_value_15 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 375;

            goto try_except_handler_8;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[66]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 375;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_10 = mod_consts[155];
        tmp_kw_call_arg_value_1_10 = mod_consts[156];
        tmp_kw_call_arg_value_2_10 = module_var_accessor_pandas$core$config_init_$$_max_colwidth_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[95]);
        }

        if (tmp_kw_call_arg_value_2_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_19);

            exception_lineno = 379;

            goto try_except_handler_8;
        }
        tmp_called_value_20 = module_var_accessor_pandas$core$config_init_$$_is_instance_factory(tstate);
        if (unlikely(tmp_called_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_19);

            exception_lineno = 380;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_2 = MAKE_LIST2(tstate, (PyObject *)Py_TYPE(Py_None),(PyObject *)&PyLong_Type);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 380;
        tmp_kw_call_dict_value_0_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_call_arg_element_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_kw_call_dict_value_0_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 380;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_1_4 = module_var_accessor_pandas$core$config_init_$$__deprecate_negative_int_max_colwidth(tstate);
        if (unlikely(tmp_kw_call_dict_value_1_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[154]);
        }

        if (tmp_kw_call_dict_value_1_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_dict_value_0_10);

            exception_lineno = 381;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 375;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_10, tmp_kw_call_arg_value_1_10, tmp_kw_call_arg_value_2_10};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_10, tmp_kw_call_dict_value_1_4};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_19, args, kw_values, mod_consts[68]);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_dict_value_0_10);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 375;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_14;
        int tmp_truth_name_1;
        tmp_called_value_21 = module_var_accessor_pandas$core$config_init_$$_is_terminal(tstate);
        if (unlikely(tmp_called_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[138]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 383;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 383;
        tmp_call_result_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_21);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 383;

            goto try_except_handler_8;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_14);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_14);

            exception_lineno = 383;

            goto try_except_handler_8;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_14);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = const_int_0;
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_64);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_65);
    }
    branch_end_5:;
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_15;
        PyObject *tmp_kw_call_arg_value_0_11;
        PyObject *tmp_kw_call_arg_value_1_11;
        PyObject *tmp_kw_call_arg_value_2_11;
        PyObject *tmp_kw_call_dict_value_0_11;
        tmp_expression_value_16 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 387;

            goto try_except_handler_8;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[66]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 387;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_11 = mod_consts[159];
        tmp_kw_call_arg_value_1_11 = module_var_accessor_pandas$core$config_init_$$_max_cols(tstate);
        if (unlikely(tmp_kw_call_arg_value_1_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[157]);
        }

        if (tmp_kw_call_arg_value_1_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_22);

            exception_lineno = 388;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_2_11 = module_var_accessor_pandas$core$config_init_$$_pc_max_cols_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[81]);
        }

        if (tmp_kw_call_arg_value_2_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_22);

            exception_lineno = 388;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_11 = module_var_accessor_pandas$core$config_init_$$_is_nonnegative_int(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[50]);
        }

        if (tmp_kw_call_dict_value_0_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_22);

            exception_lineno = 388;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 387;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_11, tmp_kw_call_arg_value_1_11, tmp_kw_call_arg_value_2_11};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_11};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_22, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 387;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_16;
        PyObject *tmp_kw_call_arg_value_0_12;
        PyObject *tmp_kw_call_arg_value_1_12;
        PyObject *tmp_kw_call_arg_value_2_12;
        PyObject *tmp_kw_call_dict_value_0_12;
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_arg_element_3;
        tmp_expression_value_17 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 390;

            goto try_except_handler_8;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[66]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 390;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_12 = mod_consts[160];
        tmp_kw_call_arg_value_1_12 = mod_consts[161];
        tmp_kw_call_arg_value_2_12 = module_var_accessor_pandas$core$config_init_$$_pc_large_repr_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[123]);
        }

        if (tmp_kw_call_arg_value_2_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_23);

            exception_lineno = 393;

            goto try_except_handler_8;
        }
        tmp_called_value_24 = module_var_accessor_pandas$core$config_init_$$_is_one_of_factory(tstate);
        if (unlikely(tmp_called_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_23);

            exception_lineno = 394;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_3 = MAKE_LIST2(tstate, mod_consts[161],mod_consts[162]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 394;
        tmp_kw_call_dict_value_0_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_call_arg_element_3);
        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_kw_call_dict_value_0_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 394;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 390;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_12, tmp_kw_call_arg_value_1_12, tmp_kw_call_arg_value_2_12};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_12};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_23, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_dict_value_0_12);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 390;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_17;
        PyObject *tmp_kw_call_arg_value_0_13;
        PyObject *tmp_kw_call_arg_value_1_13;
        PyObject *tmp_kw_call_arg_value_2_13;
        PyObject *tmp_kw_call_dict_value_0_13;
        tmp_expression_value_18 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 396;

            goto try_except_handler_8;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[66]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 396;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_13 = mod_consts[163];
        tmp_kw_call_arg_value_1_13 = mod_consts[164];
        tmp_kw_call_arg_value_2_13 = module_var_accessor_pandas$core$config_init_$$_pc_max_info_cols_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[85]);
        }

        if (tmp_kw_call_arg_value_2_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_25);

            exception_lineno = 396;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_13 = module_var_accessor_pandas$core$config_init_$$_is_int(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_kw_call_dict_value_0_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_25);

            exception_lineno = 396;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 396;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_13, tmp_kw_call_arg_value_1_13, tmp_kw_call_arg_value_2_13};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_13};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_25, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 396;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_18;
        PyObject *tmp_kw_call_arg_value_0_14;
        PyObject *tmp_kw_call_arg_value_1_14;
        PyObject *tmp_kw_call_arg_value_2_14;
        PyObject *tmp_kw_call_dict_value_0_14;
        tmp_expression_value_19 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 397;

            goto try_except_handler_8;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[66]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 397;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_14 = mod_consts[165];
        tmp_kw_call_arg_value_1_14 = mod_consts[166];
        tmp_kw_call_arg_value_2_14 = module_var_accessor_pandas$core$config_init_$$_colheader_justify_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[97]);
        }

        if (tmp_kw_call_arg_value_2_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_26);

            exception_lineno = 398;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_14 = module_var_accessor_pandas$core$config_init_$$_is_text(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[52]);
        }

        if (tmp_kw_call_dict_value_0_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_26);

            exception_lineno = 398;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 397;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_14, tmp_kw_call_arg_value_1_14, tmp_kw_call_arg_value_2_14};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_14};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_26, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 397;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_19;
        PyObject *tmp_kw_call_arg_value_0_15;
        PyObject *tmp_kw_call_arg_value_1_15;
        PyObject *tmp_kw_call_arg_value_2_15;
        PyObject *tmp_kw_call_dict_value_0_15;
        tmp_expression_value_20 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 400;

            goto try_except_handler_8;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[66]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 400;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_15 = mod_consts[167];
        tmp_kw_call_arg_value_1_15 = Py_True;
        tmp_kw_call_arg_value_2_15 = module_var_accessor_pandas$core$config_init_$$_pc_nb_repr_h_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_kw_call_arg_value_2_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_27);

            exception_lineno = 400;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_15 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_27);

            exception_lineno = 400;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 400;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_15, tmp_kw_call_arg_value_1_15, tmp_kw_call_arg_value_2_15};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_15};
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_27, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 400;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_20;
        PyObject *tmp_kw_call_arg_value_0_16;
        PyObject *tmp_kw_call_arg_value_1_16;
        PyObject *tmp_kw_call_arg_value_2_16;
        PyObject *tmp_kw_call_dict_value_0_16;
        tmp_expression_value_21 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 401;

            goto try_except_handler_8;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[66]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 401;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_16 = mod_consts[168];
        tmp_kw_call_arg_value_1_16 = mod_consts[169];
        tmp_kw_call_arg_value_2_16 = module_var_accessor_pandas$core$config_init_$$_pc_pprint_nest_depth(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_kw_call_arg_value_2_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_28);

            exception_lineno = 401;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_16 = module_var_accessor_pandas$core$config_init_$$_is_int(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_kw_call_dict_value_0_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_28);

            exception_lineno = 401;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 401;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_16, tmp_kw_call_arg_value_1_16, tmp_kw_call_arg_value_2_16};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_16};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_28, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_28);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 401;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_21;
        PyObject *tmp_kw_call_arg_value_0_17;
        PyObject *tmp_kw_call_arg_value_1_17;
        PyObject *tmp_kw_call_arg_value_2_17;
        PyObject *tmp_kw_call_dict_value_0_17;
        tmp_expression_value_22 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 402;

            goto try_except_handler_8;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[66]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 402;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_17 = mod_consts[170];
        tmp_kw_call_arg_value_1_17 = Py_True;
        tmp_kw_call_arg_value_2_17 = module_var_accessor_pandas$core$config_init_$$_pc_multi_sparse_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[91]);
        }

        if (tmp_kw_call_arg_value_2_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_29);

            exception_lineno = 402;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_17 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_29);

            exception_lineno = 402;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 402;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_17, tmp_kw_call_arg_value_1_17, tmp_kw_call_arg_value_2_17};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_17};
            tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_29, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 402;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_23 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 403;

            goto try_except_handler_8;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[66]);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 403;

            goto try_except_handler_8;
        }
        tmp_args_element_value_5 = mod_consts[171];
        tmp_args_element_value_6 = Py_True;
        tmp_args_element_value_7 = module_var_accessor_pandas$core$config_init_$$_pc_expand_repr_doc(tstate);
        if (unlikely(tmp_args_element_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[99]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_30);

            exception_lineno = 403;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_called_value_30);
        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 403;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_23;
        PyObject *tmp_kw_call_arg_value_0_18;
        PyObject *tmp_kw_call_arg_value_1_18;
        PyObject *tmp_kw_call_arg_value_2_18;
        PyObject *tmp_kw_call_dict_value_0_18;
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_arg_element_4;
        tmp_expression_value_24 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 404;

            goto try_except_handler_8;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[66]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 404;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_18 = mod_consts[172];
        tmp_kw_call_arg_value_1_18 = mod_consts[161];
        tmp_kw_call_arg_value_2_18 = module_var_accessor_pandas$core$config_init_$$_pc_show_dimensions_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[101]);
        }

        if (tmp_kw_call_arg_value_2_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_31);

            exception_lineno = 407;

            goto try_except_handler_8;
        }
        tmp_called_value_32 = module_var_accessor_pandas$core$config_init_$$_is_one_of_factory(tstate);
        if (unlikely(tmp_called_value_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_31);

            exception_lineno = 408;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_4 = MAKE_LIST3(tstate, Py_True,Py_False,mod_consts[161]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 408;
        tmp_kw_call_dict_value_0_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_call_arg_element_4);
        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_kw_call_dict_value_0_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 408;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 404;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_18, tmp_kw_call_arg_value_1_18, tmp_kw_call_arg_value_2_18};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_18};
            tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_31, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_kw_call_dict_value_0_18);
        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 404;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_25 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 410;

            goto try_except_handler_8;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[66]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 410;

            goto try_except_handler_8;
        }
        tmp_args_element_value_8 = mod_consts[173];
        tmp_args_element_value_9 = Py_None;
        tmp_args_element_value_10 = module_var_accessor_pandas$core$config_init_$$_pc_chop_threshold_doc(tstate);
        if (unlikely(tmp_args_element_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[117]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_33);

            exception_lineno = 410;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_33, call_args);
        }

        Py_DECREF(tmp_called_value_33);
        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 410;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_26 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 411;

            goto try_except_handler_8;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[66]);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 411;

            goto try_except_handler_8;
        }
        tmp_args_element_value_11 = mod_consts[174];
        tmp_args_element_value_12 = mod_consts[164];
        tmp_args_element_value_13 = module_var_accessor_pandas$core$config_init_$$_pc_max_seq_items(tstate);
        if (unlikely(tmp_args_element_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[119]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_34);

            exception_lineno = 411;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_34, call_args);
        }

        Py_DECREF(tmp_called_value_34);
        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 411;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_26;
        PyObject *tmp_kw_call_arg_value_0_19;
        PyObject *tmp_kw_call_arg_value_1_19;
        PyObject *tmp_kw_call_arg_value_2_19;
        PyObject *tmp_kw_call_dict_value_0_19;
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_arg_element_5;
        tmp_expression_value_27 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 412;

            goto try_except_handler_8;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[66]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 412;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_19 = mod_consts[175];
        tmp_kw_call_arg_value_1_19 = mod_consts[176];
        tmp_kw_call_arg_value_2_19 = module_var_accessor_pandas$core$config_init_$$_pc_width_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[115]);
        }

        if (tmp_kw_call_arg_value_2_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_35);

            exception_lineno = 413;

            goto try_except_handler_8;
        }
        tmp_called_value_36 = module_var_accessor_pandas$core$config_init_$$_is_instance_factory(tstate);
        if (unlikely(tmp_called_value_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_35);

            exception_lineno = 413;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_5 = MAKE_LIST2(tstate, (PyObject *)Py_TYPE(Py_None),(PyObject *)&PyLong_Type);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 413;
        tmp_kw_call_dict_value_0_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_call_arg_element_5);
        Py_DECREF(tmp_call_arg_element_5);
        if (tmp_kw_call_dict_value_0_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 413;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 412;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_19, tmp_kw_call_arg_value_1_19, tmp_kw_call_arg_value_2_19};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_19};
            tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_35, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_kw_call_dict_value_0_19);
        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 412;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_27;
        PyObject *tmp_kw_call_arg_value_0_20;
        PyObject *tmp_kw_call_arg_value_1_20;
        PyObject *tmp_kw_call_arg_value_2_20;
        PyObject *tmp_kw_call_dict_value_0_20;
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_arg_element_6;
        tmp_expression_value_28 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 415;

            goto try_except_handler_8;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[66]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 415;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_20 = mod_consts[177];
        tmp_kw_call_arg_value_1_20 = Py_True;
        tmp_kw_call_arg_value_2_20 = module_var_accessor_pandas$core$config_init_$$_pc_memory_usage_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[125]);
        }

        if (tmp_kw_call_arg_value_2_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_37);

            exception_lineno = 418;

            goto try_except_handler_8;
        }
        tmp_called_value_38 = module_var_accessor_pandas$core$config_init_$$_is_one_of_factory(tstate);
        if (unlikely(tmp_called_value_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_37);

            exception_lineno = 419;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_6 = MAKE_LIST4(tstate, mod_consts[178]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 419;
        tmp_kw_call_dict_value_0_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_call_arg_element_6);
        Py_DECREF(tmp_call_arg_element_6);
        if (tmp_kw_call_dict_value_0_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 419;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 415;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_20, tmp_kw_call_arg_value_1_20, tmp_kw_call_arg_value_2_20};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_20};
            tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_37, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_kw_call_dict_value_0_20);
        if (tmp_call_result_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 415;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_28;
        PyObject *tmp_kw_call_arg_value_0_21;
        PyObject *tmp_kw_call_arg_value_1_21;
        PyObject *tmp_kw_call_arg_value_2_21;
        PyObject *tmp_kw_call_dict_value_0_21;
        tmp_expression_value_29 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 421;

            goto try_except_handler_8;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[66]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 421;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_21 = mod_consts[179];
        tmp_kw_call_arg_value_1_21 = Py_False;
        tmp_kw_call_arg_value_2_21 = module_var_accessor_pandas$core$config_init_$$_pc_east_asian_width_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[103]);
        }

        if (tmp_kw_call_arg_value_2_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_39);

            exception_lineno = 422;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_21 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_39);

            exception_lineno = 422;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 421;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_21, tmp_kw_call_arg_value_1_21, tmp_kw_call_arg_value_2_21};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_21};
            tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_39, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_39);
        if (tmp_call_result_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 421;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_29;
        PyObject *tmp_kw_call_arg_value_0_22;
        PyObject *tmp_kw_call_arg_value_1_22;
        PyObject *tmp_kw_call_arg_value_2_22;
        PyObject *tmp_kw_call_dict_value_0_22;
        tmp_expression_value_30 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 424;

            goto try_except_handler_8;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[66]);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 424;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_22 = mod_consts[180];
        tmp_kw_call_arg_value_1_22 = Py_False;
        tmp_kw_call_arg_value_2_22 = module_var_accessor_pandas$core$config_init_$$_pc_east_asian_width_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[103]);
        }

        if (tmp_kw_call_arg_value_2_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_40);

            exception_lineno = 425;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_22 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_40);

            exception_lineno = 425;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 424;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_22, tmp_kw_call_arg_value_1_22, tmp_kw_call_arg_value_2_22};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_22};
            tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_40, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 424;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_30;
        PyObject *tmp_kw_call_arg_value_0_23;
        PyObject *tmp_kw_call_arg_value_1_23;
        PyObject *tmp_kw_call_arg_value_2_23;
        PyObject *tmp_kw_call_dict_value_0_23;
        tmp_expression_value_31 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 427;

            goto try_except_handler_8;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[66]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 427;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_23 = mod_consts[181];
        tmp_kw_call_arg_value_1_23 = Py_False;
        tmp_kw_call_arg_value_2_23 = module_var_accessor_pandas$core$config_init_$$_pc_latex_repr_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[107]);
        }

        if (tmp_kw_call_arg_value_2_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_41);

            exception_lineno = 427;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_23 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_41);

            exception_lineno = 427;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 427;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_23, tmp_kw_call_arg_value_1_23, tmp_kw_call_arg_value_2_23};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_23};
            tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_41, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_41);
        if (tmp_call_result_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 427;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_31;
        PyObject *tmp_kw_call_arg_value_0_24;
        PyObject *tmp_kw_call_arg_value_1_24;
        PyObject *tmp_kw_call_arg_value_2_24;
        PyObject *tmp_kw_call_dict_value_0_24;
        tmp_expression_value_32 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 428;

            goto try_except_handler_8;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[66]);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 428;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_24 = mod_consts[182];
        tmp_kw_call_arg_value_1_24 = Py_True;
        tmp_kw_call_arg_value_2_24 = module_var_accessor_pandas$core$config_init_$$_pc_latex_escape(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[127]);
        }

        if (tmp_kw_call_arg_value_2_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_42);

            exception_lineno = 428;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_24 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_42);

            exception_lineno = 428;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 428;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_24, tmp_kw_call_arg_value_1_24, tmp_kw_call_arg_value_2_24};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_24};
            tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_42, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_42);
        if (tmp_call_result_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 428;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_32;
        PyObject *tmp_kw_call_arg_value_0_25;
        PyObject *tmp_kw_call_arg_value_1_25;
        PyObject *tmp_kw_call_arg_value_2_25;
        PyObject *tmp_kw_call_dict_value_0_25;
        tmp_expression_value_33 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 429;

            goto try_except_handler_8;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[66]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 429;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_25 = mod_consts[183];
        tmp_kw_call_arg_value_1_25 = Py_False;
        tmp_kw_call_arg_value_2_25 = module_var_accessor_pandas$core$config_init_$$_pc_latex_longtable(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[129]);
        }

        if (tmp_kw_call_arg_value_2_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_43);

            exception_lineno = 429;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_25 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_43);

            exception_lineno = 429;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 429;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_25, tmp_kw_call_arg_value_1_25, tmp_kw_call_arg_value_2_25};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_25};
            tmp_call_result_32 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_43, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_43);
        if (tmp_call_result_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 429;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_33;
        PyObject *tmp_kw_call_arg_value_0_26;
        PyObject *tmp_kw_call_arg_value_1_26;
        PyObject *tmp_kw_call_arg_value_2_26;
        PyObject *tmp_kw_call_dict_value_0_26;
        tmp_expression_value_34 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 430;

            goto try_except_handler_8;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[66]);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 430;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_26 = mod_consts[184];
        tmp_kw_call_arg_value_1_26 = Py_True;
        tmp_kw_call_arg_value_2_26 = module_var_accessor_pandas$core$config_init_$$_pc_latex_multicolumn(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[131]);
        }

        if (tmp_kw_call_arg_value_2_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_44);

            exception_lineno = 431;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_26 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_44);

            exception_lineno = 431;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 430;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_26, tmp_kw_call_arg_value_1_26, tmp_kw_call_arg_value_2_26};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_26};
            tmp_call_result_33 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_44, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_44);
        if (tmp_call_result_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 430;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_34;
        PyObject *tmp_kw_call_arg_value_0_27;
        PyObject *tmp_kw_call_arg_value_1_27;
        PyObject *tmp_kw_call_arg_value_2_27;
        PyObject *tmp_kw_call_dict_value_0_27;
        tmp_expression_value_35 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 433;

            goto try_except_handler_8;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[66]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 433;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_27 = mod_consts[185];
        tmp_kw_call_arg_value_1_27 = mod_consts[186];
        tmp_kw_call_arg_value_2_27 = module_var_accessor_pandas$core$config_init_$$_pc_latex_multicolumn(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[131]);
        }

        if (tmp_kw_call_arg_value_2_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_45);

            exception_lineno = 434;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_27 = module_var_accessor_pandas$core$config_init_$$_is_text(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[52]);
        }

        if (tmp_kw_call_dict_value_0_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_45);

            exception_lineno = 434;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 433;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_27, tmp_kw_call_arg_value_1_27, tmp_kw_call_arg_value_2_27};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_27};
            tmp_call_result_34 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_45, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_45);
        if (tmp_call_result_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 433;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_35;
        PyObject *tmp_kw_call_arg_value_0_28;
        PyObject *tmp_kw_call_arg_value_1_28;
        PyObject *tmp_kw_call_arg_value_2_28;
        PyObject *tmp_kw_call_dict_value_0_28;
        tmp_expression_value_36 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 436;

            goto try_except_handler_8;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[66]);
        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 436;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_28 = mod_consts[187];
        tmp_kw_call_arg_value_1_28 = Py_False;
        tmp_kw_call_arg_value_2_28 = module_var_accessor_pandas$core$config_init_$$_pc_latex_multirow(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[135]);
        }

        if (tmp_kw_call_arg_value_2_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_46);

            exception_lineno = 436;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_28 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_46);

            exception_lineno = 436;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 436;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_28, tmp_kw_call_arg_value_1_28, tmp_kw_call_arg_value_2_28};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_28};
            tmp_call_result_35 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_46, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_46);
        if (tmp_call_result_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 436;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_36;
        PyObject *tmp_kw_call_arg_value_0_29;
        PyObject *tmp_kw_call_arg_value_1_29;
        PyObject *tmp_kw_call_arg_value_2_29;
        PyObject *tmp_kw_call_dict_value_0_29;
        PyObject *tmp_kw_call_dict_value_1_5;
        tmp_expression_value_37 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_37 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 437;

            goto try_except_handler_8;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[66]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 437;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_29 = mod_consts[188];
        tmp_kw_call_arg_value_1_29 = Py_False;
        tmp_kw_call_arg_value_2_29 = module_var_accessor_pandas$core$config_init_$$_pc_table_schema_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
        }

        if (tmp_kw_call_arg_value_2_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_47);

            exception_lineno = 440;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_29 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_47);

            exception_lineno = 441;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_1_5 = module_var_accessor_pandas$core$config_init_$$_table_schema_cb(tstate);
        if (unlikely(tmp_kw_call_dict_value_1_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[136]);
        }

        if (tmp_kw_call_dict_value_1_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_47);

            exception_lineno = 442;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 437;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_29, tmp_kw_call_arg_value_1_29, tmp_kw_call_arg_value_2_29};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_29, tmp_kw_call_dict_value_1_5};
            tmp_call_result_36 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_47, args, kw_values, mod_consts[68]);
        }

        Py_DECREF(tmp_called_value_47);
        if (tmp_call_result_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 437;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_37;
        PyObject *tmp_kw_call_arg_value_0_30;
        PyObject *tmp_kw_call_arg_value_1_30;
        PyObject *tmp_kw_call_arg_value_2_30;
        PyObject *tmp_kw_call_dict_value_0_30;
        tmp_expression_value_38 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 444;

            goto try_except_handler_8;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[66]);
        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 444;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_30 = mod_consts[189];
        tmp_kw_call_arg_value_1_30 = const_int_pos_1;
        tmp_kw_call_arg_value_2_30 = module_var_accessor_pandas$core$config_init_$$_pc_html_border_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[111]);
        }

        if (tmp_kw_call_arg_value_2_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_48);

            exception_lineno = 444;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_30 = module_var_accessor_pandas$core$config_init_$$_is_int(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_kw_call_dict_value_0_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_48);

            exception_lineno = 444;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 444;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_30, tmp_kw_call_arg_value_1_30, tmp_kw_call_arg_value_2_30};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_30};
            tmp_call_result_37 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_48, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_48);
        if (tmp_call_result_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 444;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_38;
        PyObject *tmp_kw_call_arg_value_0_31;
        PyObject *tmp_kw_call_arg_value_1_31;
        PyObject *tmp_kw_call_arg_value_2_31;
        PyObject *tmp_kw_call_dict_value_0_31;
        tmp_expression_value_39 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 445;

            goto try_except_handler_8;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[66]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 445;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_31 = mod_consts[190];
        tmp_kw_call_arg_value_1_31 = Py_True;
        tmp_kw_call_arg_value_2_31 = module_var_accessor_pandas$core$config_init_$$_pc_html_use_mathjax_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[113]);
        }

        if (tmp_kw_call_arg_value_2_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_49);

            exception_lineno = 446;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_31 = module_var_accessor_pandas$core$config_init_$$_is_bool(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[46]);
        }

        if (tmp_kw_call_dict_value_0_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_49);

            exception_lineno = 446;

            goto try_except_handler_8;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 445;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_31, tmp_kw_call_arg_value_1_31, tmp_kw_call_arg_value_2_31};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_31};
            tmp_call_result_38 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_49, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_49);
        if (tmp_call_result_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 445;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_38);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_6);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
        } else if (exception_keeper_lineno_6 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_6);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_assign_source_66;
        tmp_assign_source_66 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_50 = tmp_with_2__exit;
        tmp_args_element_value_14 = EXC_TYPE(tstate);
        tmp_args_element_value_15 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_15); 
        tmp_args_element_value_16 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 446;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_50, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 446;

            goto try_except_handler_9;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 446;

            goto try_except_handler_9;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 446;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_9;
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 340;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_9;
    branch_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_2__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_call_result_39;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_51 = tmp_with_2__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 446;
        tmp_call_result_39 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_51, mod_consts[71]);

        if (tmp_call_result_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_8);

            exception_lineno = 446;

            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_39);
    }
    branch_no_8:;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_8:;
    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_2__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_call_result_40;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_52 = tmp_with_2__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 446;
        tmp_call_result_40 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_52, mod_consts[71]);

        if (tmp_call_result_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 446;

            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_40);
    }
    branch_no_9:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    CHECK_OBJECT(tmp_with_2__exit);
    Py_DECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[191];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_67);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 454;

            goto try_except_handler_10;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 454;
        tmp_assign_source_68 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[193], 0)
        );

        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 454;

            goto try_except_handler_10;
        }
        assert(tmp_with_3__source == NULL);
        tmp_with_3__source = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_40 = tmp_with_3__source;
        tmp_called_value_53 = LOOKUP_SPECIAL(tstate, tmp_expression_value_40, mod_consts[64]);
        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 454;

            goto try_except_handler_10;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 454;
        tmp_assign_source_69 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_53);
        Py_DECREF(tmp_called_value_53);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 454;

            goto try_except_handler_10;
        }
        assert(tmp_with_3__enter == NULL);
        tmp_with_3__enter = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_41 = tmp_with_3__source;
        tmp_assign_source_70 = LOOKUP_SPECIAL(tstate, tmp_expression_value_41, mod_consts[65]);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 454;

            goto try_except_handler_10;
        }
        assert(tmp_with_3__exit == NULL);
        tmp_with_3__exit = tmp_assign_source_70;
    }
    {
        nuitka_bool tmp_assign_source_71;
        tmp_assign_source_71 = NUITKA_BOOL_TRUE;
        tmp_with_3__indicator = tmp_assign_source_71;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_42 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_42 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 455;

            goto try_except_handler_12;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[66]);
        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 455;

            goto try_except_handler_12;
        }
        tmp_args_element_value_17 = mod_consts[194];
        tmp_args_element_value_18 = Py_False;
        tmp_args_element_value_19 = module_var_accessor_pandas$core$config_init_$$_tc_sim_interactive_doc(tstate);
        if (unlikely(tmp_args_element_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[192]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_54);

            exception_lineno = 455;

            goto try_except_handler_12;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 455;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_41 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_54, call_args);
        }

        Py_DECREF(tmp_called_value_54);
        if (tmp_call_result_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 455;

            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_41);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_lineno_10 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_10 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_10);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
        } else if (exception_keeper_lineno_10 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_10);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_10);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_7 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        nuitka_bool tmp_assign_source_72;
        tmp_assign_source_72 = NUITKA_BOOL_FALSE;
        tmp_with_3__indicator = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_55;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_55 = tmp_with_3__exit;
        tmp_args_element_value_20 = EXC_TYPE(tstate);
        tmp_args_element_value_21 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_21); 
        tmp_args_element_value_22 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 455;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_55, call_args);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 455;

            goto try_except_handler_13;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 455;

            goto try_except_handler_13;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 455;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_13;
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 454;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_13;
    branch_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_lineno_11 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_11 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    // Re-raise.
    exception_state = exception_keeper_name_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_11;
    // End of try:
    try_end_11:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    goto try_end_10;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_10:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_lineno_12 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_12 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_12;
        nuitka_bool tmp_cmp_expr_left_8;
        nuitka_bool tmp_cmp_expr_right_8;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_8 = tmp_with_3__indicator;
        tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_call_result_42;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_56 = tmp_with_3__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 455;
        tmp_call_result_42 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_56, mod_consts[71]);

        if (tmp_call_result_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_12);

            exception_lineno = 455;

            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_42);
    }
    branch_no_12:;
    // Re-raise.
    exception_state = exception_keeper_name_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_10;
    // End of try:
    try_end_12:;
    {
        bool tmp_condition_result_13;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = tmp_with_3__indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_13 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_call_result_43;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_57 = tmp_with_3__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 455;
        tmp_call_result_43 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_57, mod_consts[71]);

        if (tmp_call_result_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 455;

            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_43);
    }
    branch_no_13:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_lineno_13 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_13 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    Py_XDECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_with_3__source);
    Py_DECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    CHECK_OBJECT(tmp_with_3__enter);
    Py_DECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    CHECK_OBJECT(tmp_with_3__exit);
    Py_DECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[197];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;


        tmp_assign_source_75 = MAKE_FUNCTION_pandas$core$config_init$$$function__7_use_inf_as_na_cb(tstate);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_75);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 480;

            goto try_except_handler_14;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 480;
        tmp_assign_source_76 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[193], 0)
        );

        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 480;

            goto try_except_handler_14;
        }
        assert(tmp_with_4__source == NULL);
        tmp_with_4__source = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(tmp_with_4__source);
        tmp_expression_value_43 = tmp_with_4__source;
        tmp_called_value_58 = LOOKUP_SPECIAL(tstate, tmp_expression_value_43, mod_consts[64]);
        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 480;

            goto try_except_handler_14;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 480;
        tmp_assign_source_77 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_58);
        Py_DECREF(tmp_called_value_58);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 480;

            goto try_except_handler_14;
        }
        assert(tmp_with_4__enter == NULL);
        tmp_with_4__enter = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_with_4__source);
        tmp_expression_value_44 = tmp_with_4__source;
        tmp_assign_source_78 = LOOKUP_SPECIAL(tstate, tmp_expression_value_44, mod_consts[65]);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 480;

            goto try_except_handler_14;
        }
        assert(tmp_with_4__exit == NULL);
        tmp_with_4__exit = tmp_assign_source_78;
    }
    {
        nuitka_bool tmp_assign_source_79;
        tmp_assign_source_79 = NUITKA_BOOL_TRUE;
        tmp_with_4__indicator = tmp_assign_source_79;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_44;
        PyObject *tmp_kw_call_arg_value_0_32;
        PyObject *tmp_kw_call_arg_value_1_32;
        PyObject *tmp_kw_call_arg_value_2_32;
        PyObject *tmp_kw_call_dict_value_0_32;
        tmp_expression_value_45 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_45 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 481;

            goto try_except_handler_16;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[66]);
        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 481;

            goto try_except_handler_16;
        }
        tmp_kw_call_arg_value_0_32 = mod_consts[200];
        tmp_kw_call_arg_value_1_32 = Py_False;
        tmp_kw_call_arg_value_2_32 = module_var_accessor_pandas$core$config_init_$$_use_inf_as_na_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[198]);
        }

        if (tmp_kw_call_arg_value_2_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_59);

            exception_lineno = 481;

            goto try_except_handler_16;
        }
        tmp_kw_call_dict_value_0_32 = module_var_accessor_pandas$core$config_init_$$_use_inf_as_na_cb(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[199]);
        }

        if (tmp_kw_call_dict_value_0_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_59);

            exception_lineno = 481;

            goto try_except_handler_16;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 481;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_32, tmp_kw_call_arg_value_1_32, tmp_kw_call_arg_value_2_32};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_32};
            tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_59, args, kw_values, mod_consts[201]);
        }

        Py_DECREF(tmp_called_value_59);
        if (tmp_call_result_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 481;

            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_45;
        PyObject *tmp_kw_call_arg_value_0_33;
        PyObject *tmp_kw_call_arg_value_1_33;
        PyObject *tmp_kw_call_arg_value_2_33;
        PyObject *tmp_kw_call_dict_value_0_33;
        tmp_expression_value_46 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_46 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 482;

            goto try_except_handler_16;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[66]);
        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 482;

            goto try_except_handler_16;
        }
        tmp_kw_call_arg_value_0_33 = mod_consts[202];
        tmp_kw_call_arg_value_1_33 = Py_False;
        tmp_kw_call_arg_value_2_33 = module_var_accessor_pandas$core$config_init_$$_use_inf_as_null_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[196]);
        }

        if (tmp_kw_call_arg_value_2_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_60);

            exception_lineno = 483;

            goto try_except_handler_16;
        }
        tmp_kw_call_dict_value_0_33 = module_var_accessor_pandas$core$config_init_$$_use_inf_as_na_cb(tstate);
        if (unlikely(tmp_kw_call_dict_value_0_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[199]);
        }

        if (tmp_kw_call_dict_value_0_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_60);

            exception_lineno = 483;

            goto try_except_handler_16;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 482;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_33, tmp_kw_call_arg_value_1_33, tmp_kw_call_arg_value_2_33};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_33};
            tmp_call_result_45 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_60, args, kw_values, mod_consts[201]);
        }

        Py_DECREF(tmp_called_value_60);
        if (tmp_call_result_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 482;

            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_45);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_lineno_14 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_14 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_14);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14, exception_tb);
        } else if (exception_keeper_lineno_14 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_14);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_14);
    // Tried code:
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_10 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        nuitka_bool tmp_assign_source_80;
        tmp_assign_source_80 = NUITKA_BOOL_FALSE;
        tmp_with_4__indicator = tmp_assign_source_80;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_61 = tmp_with_4__exit;
        tmp_args_element_value_23 = EXC_TYPE(tstate);
        tmp_args_element_value_24 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_24); 
        tmp_args_element_value_25 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 483;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_61, call_args);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 483;

            goto try_except_handler_17;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 483;

            goto try_except_handler_17;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 483;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_17;
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 480;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_17;
    branch_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_lineno_15 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_15 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

    // Re-raise.
    exception_state = exception_keeper_name_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_15;
    // End of try:
    try_end_15:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

    goto try_end_14;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_14:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_lineno_16 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_16 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_16;
        nuitka_bool tmp_cmp_expr_left_11;
        nuitka_bool tmp_cmp_expr_right_11;
        assert(tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_11 = tmp_with_4__indicator;
        tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
        tmp_condition_result_16 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_call_result_46;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_62 = tmp_with_4__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 483;
        tmp_call_result_46 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_62, mod_consts[71]);

        if (tmp_call_result_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_16);

            exception_lineno = 483;

            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_46);
    }
    branch_no_16:;
    // Re-raise.
    exception_state = exception_keeper_name_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_14;
    // End of try:
    try_end_16:;
    {
        bool tmp_condition_result_17;
        nuitka_bool tmp_cmp_expr_left_12;
        nuitka_bool tmp_cmp_expr_right_12;
        assert(tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_12 = tmp_with_4__indicator;
        tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
        tmp_condition_result_17 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_result_47;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_63 = tmp_with_4__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 483;
        tmp_call_result_47 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_63, mod_consts[71]);

        if (tmp_call_result_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 483;

            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_47);
    }
    branch_no_17:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_lineno_17 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_17 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_4__source);
    tmp_with_4__source = NULL;
    Py_XDECREF(tmp_with_4__enter);
    tmp_with_4__enter = NULL;
    Py_XDECREF(tmp_with_4__exit);
    tmp_with_4__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_with_4__source);
    Py_DECREF(tmp_with_4__source);
    tmp_with_4__source = NULL;
    CHECK_OBJECT(tmp_with_4__enter);
    Py_DECREF(tmp_with_4__enter);
    tmp_with_4__enter = NULL;
    CHECK_OBJECT(tmp_with_4__exit);
    Py_DECREF(tmp_with_4__exit);
    tmp_with_4__exit = NULL;
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_48;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_47 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_47 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[203]);
        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = module_var_accessor_pandas$core$config_init_$$_use_inf_as_null_doc(tstate);
        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[196]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_64);

            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[204];
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 486;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};
            tmp_call_result_48 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_64, mod_consts[205], kw_values, mod_consts[206]);
        }

        Py_DECREF(tmp_called_value_64);
        if (tmp_call_result_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_81);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 498;

            goto try_except_handler_18;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 498;
        tmp_assign_source_82 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[193], 0)
        );

        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 498;

            goto try_except_handler_18;
        }
        assert(tmp_with_5__source == NULL);
        tmp_with_5__source = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_with_5__source);
        tmp_expression_value_48 = tmp_with_5__source;
        tmp_called_value_65 = LOOKUP_SPECIAL(tstate, tmp_expression_value_48, mod_consts[64]);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 498;

            goto try_except_handler_18;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 498;
        tmp_assign_source_83 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_65);
        Py_DECREF(tmp_called_value_65);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 498;

            goto try_except_handler_18;
        }
        assert(tmp_with_5__enter == NULL);
        tmp_with_5__enter = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_expression_value_49;
        CHECK_OBJECT(tmp_with_5__source);
        tmp_expression_value_49 = tmp_with_5__source;
        tmp_assign_source_84 = LOOKUP_SPECIAL(tstate, tmp_expression_value_49, mod_consts[65]);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 498;

            goto try_except_handler_18;
        }
        assert(tmp_with_5__exit == NULL);
        tmp_with_5__exit = tmp_assign_source_84;
    }
    {
        nuitka_bool tmp_assign_source_85;
        tmp_assign_source_85 = NUITKA_BOOL_TRUE;
        tmp_with_5__indicator = tmp_assign_source_85;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_49;
        PyObject *tmp_kw_call_arg_value_0_34;
        PyObject *tmp_kw_call_arg_value_1_34;
        PyObject *tmp_kw_call_arg_value_2_34;
        PyObject *tmp_kw_call_dict_value_0_34;
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_arg_element_7;
        tmp_expression_value_50 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_50 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 499;

            goto try_except_handler_20;
        }
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[66]);
        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 499;

            goto try_except_handler_20;
        }
        tmp_kw_call_arg_value_0_34 = mod_consts[208];
        tmp_kw_call_arg_value_1_34 = mod_consts[21];
        tmp_kw_call_arg_value_2_34 = module_var_accessor_pandas$core$config_init_$$_chained_assignment(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[208]);
        }

        if (tmp_kw_call_arg_value_2_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_66);

            exception_lineno = 502;

            goto try_except_handler_20;
        }
        tmp_called_value_67 = module_var_accessor_pandas$core$config_init_$$_is_one_of_factory(tstate);
        if (unlikely(tmp_called_value_67 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_66);

            exception_lineno = 503;

            goto try_except_handler_20;
        }
        tmp_call_arg_element_7 = MAKE_LIST3(tstate, Py_None,mod_consts[21],mod_consts[209]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 503;
        tmp_kw_call_dict_value_0_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_call_arg_element_7);
        Py_DECREF(tmp_call_arg_element_7);
        if (tmp_kw_call_dict_value_0_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 503;

            goto try_except_handler_20;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 499;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_34, tmp_kw_call_arg_value_1_34, tmp_kw_call_arg_value_2_34};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_34};
            tmp_call_result_49 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_66, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_kw_call_dict_value_0_34);
        if (tmp_call_result_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 499;

            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_49);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_lineno_18 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_18 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 5.
    exception_preserved_5 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_18);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_18);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_18, exception_tb);
        } else if (exception_keeper_lineno_18 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_18);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_18, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_18);
    // Tried code:
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        tmp_cmp_expr_left_13 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_13 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        nuitka_bool tmp_assign_source_86;
        tmp_assign_source_86 = NUITKA_BOOL_FALSE;
        tmp_with_5__indicator = tmp_assign_source_86;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_68 = tmp_with_5__exit;
        tmp_args_element_value_26 = EXC_TYPE(tstate);
        tmp_args_element_value_27 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_27); 
        tmp_args_element_value_28 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 503;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_68, call_args);
        }

        if (tmp_operand_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 503;

            goto try_except_handler_21;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 503;

            goto try_except_handler_21;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 503;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_21;
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 498;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_21;
    branch_end_18:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_lineno_19 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_19 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

    // Re-raise.
    exception_state = exception_keeper_name_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_19;
    // End of try:
    try_end_19:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

    goto try_end_18;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_18:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_lineno_20 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_20 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_20;
        nuitka_bool tmp_cmp_expr_left_14;
        nuitka_bool tmp_cmp_expr_right_14;
        assert(tmp_with_5__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_14 = tmp_with_5__indicator;
        tmp_cmp_expr_right_14 = NUITKA_BOOL_TRUE;
        tmp_condition_result_20 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_call_result_50;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_69 = tmp_with_5__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 503;
        tmp_call_result_50 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_69, mod_consts[71]);

        if (tmp_call_result_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_20);

            exception_lineno = 503;

            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_50);
    }
    branch_no_20:;
    // Re-raise.
    exception_state = exception_keeper_name_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_18;
    // End of try:
    try_end_20:;
    {
        bool tmp_condition_result_21;
        nuitka_bool tmp_cmp_expr_left_15;
        nuitka_bool tmp_cmp_expr_right_15;
        assert(tmp_with_5__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_15 = tmp_with_5__indicator;
        tmp_cmp_expr_right_15 = NUITKA_BOOL_TRUE;
        tmp_condition_result_21 = (tmp_cmp_expr_left_15 == tmp_cmp_expr_right_15) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_call_result_51;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_70 = tmp_with_5__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 503;
        tmp_call_result_51 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_70, mod_consts[71]);

        if (tmp_call_result_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 503;

            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_51);
    }
    branch_no_21:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_lineno_21 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_21 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_5__source);
    tmp_with_5__source = NULL;
    Py_XDECREF(tmp_with_5__enter);
    tmp_with_5__enter = NULL;
    Py_XDECREF(tmp_with_5__exit);
    tmp_with_5__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_with_5__source);
    Py_DECREF(tmp_with_5__source);
    tmp_with_5__source = NULL;
    CHECK_OBJECT(tmp_with_5__enter);
    Py_DECREF(tmp_with_5__enter);
    tmp_with_5__enter = NULL;
    CHECK_OBJECT(tmp_with_5__exit);
    Py_DECREF(tmp_with_5__exit);
    tmp_with_5__exit = NULL;
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[210];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = MAKE_LIST1(tstate, mod_consts[212]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = MAKE_LIST2(tstate, mod_consts[212],mod_consts[214]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = MAKE_LIST2(tstate, mod_consts[212],mod_consts[214]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = MAKE_LIST1(tstate, mod_consts[217]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = MAKE_LIST1(tstate, mod_consts[219]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_92);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 521;

            goto try_except_handler_22;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 521;
        tmp_assign_source_93 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[221], 0)
        );

        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 521;

            goto try_except_handler_22;
        }
        assert(tmp_with_6__source == NULL);
        tmp_with_6__source = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(tmp_with_6__source);
        tmp_expression_value_51 = tmp_with_6__source;
        tmp_called_value_71 = LOOKUP_SPECIAL(tstate, tmp_expression_value_51, mod_consts[64]);
        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 521;

            goto try_except_handler_22;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 521;
        tmp_assign_source_94 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_71);
        Py_DECREF(tmp_called_value_71);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 521;

            goto try_except_handler_22;
        }
        assert(tmp_with_6__enter == NULL);
        tmp_with_6__enter = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_with_6__source);
        tmp_expression_value_52 = tmp_with_6__source;
        tmp_assign_source_95 = LOOKUP_SPECIAL(tstate, tmp_expression_value_52, mod_consts[65]);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 521;

            goto try_except_handler_22;
        }
        assert(tmp_with_6__exit == NULL);
        tmp_with_6__exit = tmp_assign_source_95;
    }
    {
        nuitka_bool tmp_assign_source_96;
        tmp_assign_source_96 = NUITKA_BOOL_TRUE;
        tmp_with_6__indicator = tmp_assign_source_96;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_call_result_52;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_53 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_53 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 522;

            goto try_except_handler_24;
        }
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[66]);
        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 522;

            goto try_except_handler_24;
        }
        tmp_tuple_element_1 = mod_consts[222];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_value_73;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_kw_call_value_1_2;
            PyObject *tmp_str_arg_value_1;
            PyObject *tmp_iterable_value_1;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_expression_value_54 = module_var_accessor_pandas$core$config_init_$$_reader_engine_doc(tstate);
            if (unlikely(tmp_expression_value_54 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[211]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 525;

                goto tuple_build_exception_1;
            }
            tmp_called_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[224]);
            if (tmp_called_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 525;

                goto tuple_build_exception_1;
            }
            tmp_kw_call_value_0_3 = mod_consts[225];
            tmp_str_arg_value_1 = mod_consts[226];
            tmp_iterable_value_1 = module_var_accessor_pandas$core$config_init_$$__xls_options(tstate);
            if (unlikely(tmp_iterable_value_1 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[213]);
            }

            if (tmp_iterable_value_1 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_73);

                exception_lineno = 525;

                goto tuple_build_exception_1;
            }
            tmp_kw_call_value_1_2 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
            if (tmp_kw_call_value_1_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_73);

                exception_lineno = 525;

                goto tuple_build_exception_1;
            }
            frame_frame_pandas$core$config_init->m_frame.f_lineno = 525;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};

                tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_73, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_kw_call_value_1_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 525;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_value_1);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[228]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 522;
        tmp_call_result_52 = CALL_FUNCTION(tstate, tmp_called_value_72, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 522;

            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_52);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_lineno_22 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_22 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 6.
    exception_preserved_6 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_22);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_22);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_22, exception_tb);
        } else if (exception_keeper_lineno_22 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_22);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_22, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_22);
    // Tried code:
    {
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        tmp_cmp_expr_left_16 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_16 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        nuitka_bool tmp_assign_source_97;
        tmp_assign_source_97 = NUITKA_BOOL_FALSE;
        tmp_with_6__indicator = tmp_assign_source_97;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_called_value_74;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_74 = tmp_with_6__exit;
        tmp_args_element_value_29 = EXC_TYPE(tstate);
        tmp_args_element_value_30 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_30); 
        tmp_args_element_value_31 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 526;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_74, call_args);
        }

        if (tmp_operand_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;

            goto try_except_handler_25;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;

            goto try_except_handler_25;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 526;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_25;
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 521;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_25;
    branch_end_22:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_lineno_23 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_23 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_6);

    // Re-raise.
    exception_state = exception_keeper_name_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_23;
    // End of try:
    try_end_23:;
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_6);

    goto try_end_22;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_22:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_lineno_24 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_24 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_24;
        nuitka_bool tmp_cmp_expr_left_17;
        nuitka_bool tmp_cmp_expr_right_17;
        assert(tmp_with_6__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_17 = tmp_with_6__indicator;
        tmp_cmp_expr_right_17 = NUITKA_BOOL_TRUE;
        tmp_condition_result_24 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_call_result_53;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_75 = tmp_with_6__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 526;
        tmp_call_result_53 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_75, mod_consts[71]);

        if (tmp_call_result_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_24);

            exception_lineno = 526;

            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_53);
    }
    branch_no_24:;
    // Re-raise.
    exception_state = exception_keeper_name_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_22;
    // End of try:
    try_end_24:;
    {
        bool tmp_condition_result_25;
        nuitka_bool tmp_cmp_expr_left_18;
        nuitka_bool tmp_cmp_expr_right_18;
        assert(tmp_with_6__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_18 = tmp_with_6__indicator;
        tmp_cmp_expr_right_18 = NUITKA_BOOL_TRUE;
        tmp_condition_result_25 = (tmp_cmp_expr_left_18 == tmp_cmp_expr_right_18) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_call_result_54;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_76 = tmp_with_6__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 526;
        tmp_call_result_54 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_76, mod_consts[71]);

        if (tmp_call_result_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;

            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_54);
    }
    branch_no_25:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_lineno_25 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_25 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_6__source);
    tmp_with_6__source = NULL;
    Py_XDECREF(tmp_with_6__enter);
    tmp_with_6__enter = NULL;
    Py_XDECREF(tmp_with_6__exit);
    tmp_with_6__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_with_6__source);
    Py_DECREF(tmp_with_6__source);
    tmp_with_6__source = NULL;
    CHECK_OBJECT(tmp_with_6__enter);
    Py_DECREF(tmp_with_6__enter);
    tmp_with_6__enter = NULL;
    CHECK_OBJECT(tmp_with_6__exit);
    Py_DECREF(tmp_with_6__exit);
    tmp_with_6__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_7 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 529;

            goto try_except_handler_26;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 529;
        tmp_assign_source_98 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[229], 0)
        );

        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 529;

            goto try_except_handler_26;
        }
        assert(tmp_with_7__source == NULL);
        tmp_with_7__source = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(tmp_with_7__source);
        tmp_expression_value_55 = tmp_with_7__source;
        tmp_called_value_77 = LOOKUP_SPECIAL(tstate, tmp_expression_value_55, mod_consts[64]);
        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 529;

            goto try_except_handler_26;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 529;
        tmp_assign_source_99 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_77);
        Py_DECREF(tmp_called_value_77);
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 529;

            goto try_except_handler_26;
        }
        assert(tmp_with_7__enter == NULL);
        tmp_with_7__enter = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_with_7__source);
        tmp_expression_value_56 = tmp_with_7__source;
        tmp_assign_source_100 = LOOKUP_SPECIAL(tstate, tmp_expression_value_56, mod_consts[65]);
        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 529;

            goto try_except_handler_26;
        }
        assert(tmp_with_7__exit == NULL);
        tmp_with_7__exit = tmp_assign_source_100;
    }
    {
        nuitka_bool tmp_assign_source_101;
        tmp_assign_source_101 = NUITKA_BOOL_TRUE;
        tmp_with_7__indicator = tmp_assign_source_101;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_call_result_55;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_57 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_57 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 530;

            goto try_except_handler_28;
        }
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[66]);
        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 530;

            goto try_except_handler_28;
        }
        tmp_tuple_element_2 = mod_consts[222];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_value_79;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_kw_call_value_1_3;
            PyObject *tmp_str_arg_value_2;
            PyObject *tmp_iterable_value_2;
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_expression_value_58 = module_var_accessor_pandas$core$config_init_$$_reader_engine_doc(tstate);
            if (unlikely(tmp_expression_value_58 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[211]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 533;

                goto tuple_build_exception_2;
            }
            tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[224]);
            if (tmp_called_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 533;

                goto tuple_build_exception_2;
            }
            tmp_kw_call_value_0_4 = mod_consts[230];
            tmp_str_arg_value_2 = mod_consts[226];
            tmp_iterable_value_2 = module_var_accessor_pandas$core$config_init_$$__xlsm_options(tstate);
            if (unlikely(tmp_iterable_value_2 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[215]);
            }

            if (tmp_iterable_value_2 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_79);

                exception_lineno = 533;

                goto tuple_build_exception_2;
            }
            tmp_kw_call_value_1_3 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
            if (tmp_kw_call_value_1_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_79);

                exception_lineno = 533;

                goto tuple_build_exception_2;
            }
            frame_frame_pandas$core$config_init->m_frame.f_lineno = 533;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3};

                tmp_tuple_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_79, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_kw_call_value_1_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 533;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_value_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_value_2);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts[228]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 530;
        tmp_call_result_55 = CALL_FUNCTION(tstate, tmp_called_value_78, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 530;

            goto try_except_handler_28;
        }
        Py_DECREF(tmp_call_result_55);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_lineno_26 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_26 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 7.
    exception_preserved_7 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_26);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_26);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_26, exception_tb);
        } else if (exception_keeper_lineno_26 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_26);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_26, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_26);
    // Tried code:
    {
        bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        tmp_cmp_expr_left_19 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_19 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        nuitka_bool tmp_assign_source_102;
        tmp_assign_source_102 = NUITKA_BOOL_FALSE;
        tmp_with_7__indicator = tmp_assign_source_102;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_called_value_80;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_80 = tmp_with_7__exit;
        tmp_args_element_value_32 = EXC_TYPE(tstate);
        tmp_args_element_value_33 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_33); 
        tmp_args_element_value_34 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 534;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_operand_value_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_80, call_args);
        }

        if (tmp_operand_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 534;

            goto try_except_handler_29;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        Py_DECREF(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 534;

            goto try_except_handler_29;
        }
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 534;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_29;
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 529;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_29;
    branch_end_26:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_lineno_27 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_27 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_7);

    // Re-raise.
    exception_state = exception_keeper_name_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_27;
    // End of try:
    try_end_27:;
    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_7);

    goto try_end_26;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_26:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_lineno_28 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_28 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_28;
        nuitka_bool tmp_cmp_expr_left_20;
        nuitka_bool tmp_cmp_expr_right_20;
        assert(tmp_with_7__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_20 = tmp_with_7__indicator;
        tmp_cmp_expr_right_20 = NUITKA_BOOL_TRUE;
        tmp_condition_result_28 = (tmp_cmp_expr_left_20 == tmp_cmp_expr_right_20) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_call_result_56;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_81 = tmp_with_7__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 534;
        tmp_call_result_56 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_81, mod_consts[71]);

        if (tmp_call_result_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_28);

            exception_lineno = 534;

            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_56);
    }
    branch_no_28:;
    // Re-raise.
    exception_state = exception_keeper_name_28;
    exception_lineno = exception_keeper_lineno_28;

    goto try_except_handler_26;
    // End of try:
    try_end_28:;
    {
        bool tmp_condition_result_29;
        nuitka_bool tmp_cmp_expr_left_21;
        nuitka_bool tmp_cmp_expr_right_21;
        assert(tmp_with_7__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_21 = tmp_with_7__indicator;
        tmp_cmp_expr_right_21 = NUITKA_BOOL_TRUE;
        tmp_condition_result_29 = (tmp_cmp_expr_left_21 == tmp_cmp_expr_right_21) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_call_result_57;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_82 = tmp_with_7__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 534;
        tmp_call_result_57 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_82, mod_consts[71]);

        if (tmp_call_result_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 534;

            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_57);
    }
    branch_no_29:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_lineno_29 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_29 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_7__source);
    tmp_with_7__source = NULL;
    Py_XDECREF(tmp_with_7__enter);
    tmp_with_7__enter = NULL;
    Py_XDECREF(tmp_with_7__exit);
    tmp_with_7__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    CHECK_OBJECT(tmp_with_7__source);
    Py_DECREF(tmp_with_7__source);
    tmp_with_7__source = NULL;
    CHECK_OBJECT(tmp_with_7__enter);
    Py_DECREF(tmp_with_7__enter);
    tmp_with_7__enter = NULL;
    CHECK_OBJECT(tmp_with_7__exit);
    Py_DECREF(tmp_with_7__exit);
    tmp_with_7__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 538;

            goto try_except_handler_30;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 538;
        tmp_assign_source_103 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_8,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[231], 0)
        );

        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 538;

            goto try_except_handler_30;
        }
        assert(tmp_with_8__source == NULL);
        tmp_with_8__source = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_59;
        CHECK_OBJECT(tmp_with_8__source);
        tmp_expression_value_59 = tmp_with_8__source;
        tmp_called_value_83 = LOOKUP_SPECIAL(tstate, tmp_expression_value_59, mod_consts[64]);
        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 538;

            goto try_except_handler_30;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 538;
        tmp_assign_source_104 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_83);
        Py_DECREF(tmp_called_value_83);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 538;

            goto try_except_handler_30;
        }
        assert(tmp_with_8__enter == NULL);
        tmp_with_8__enter = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_with_8__source);
        tmp_expression_value_60 = tmp_with_8__source;
        tmp_assign_source_105 = LOOKUP_SPECIAL(tstate, tmp_expression_value_60, mod_consts[65]);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 538;

            goto try_except_handler_30;
        }
        assert(tmp_with_8__exit == NULL);
        tmp_with_8__exit = tmp_assign_source_105;
    }
    {
        nuitka_bool tmp_assign_source_106;
        tmp_assign_source_106 = NUITKA_BOOL_TRUE;
        tmp_with_8__indicator = tmp_assign_source_106;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_call_result_58;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        tmp_expression_value_61 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_61 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 539;

            goto try_except_handler_32;
        }
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[66]);
        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 539;

            goto try_except_handler_32;
        }
        tmp_tuple_element_3 = mod_consts[222];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_value_85;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_kw_call_value_1_4;
            PyObject *tmp_str_arg_value_3;
            PyObject *tmp_iterable_value_3;
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
            tmp_expression_value_62 = module_var_accessor_pandas$core$config_init_$$_reader_engine_doc(tstate);
            if (unlikely(tmp_expression_value_62 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[211]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 542;

                goto tuple_build_exception_3;
            }
            tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[224]);
            if (tmp_called_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 542;

                goto tuple_build_exception_3;
            }
            tmp_kw_call_value_0_5 = mod_consts[232];
            tmp_str_arg_value_3 = mod_consts[226];
            tmp_iterable_value_3 = module_var_accessor_pandas$core$config_init_$$__xlsx_options(tstate);
            if (unlikely(tmp_iterable_value_3 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[216]);
            }

            if (tmp_iterable_value_3 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_85);

                exception_lineno = 542;

                goto tuple_build_exception_3;
            }
            tmp_kw_call_value_1_4 = UNICODE_JOIN(tstate, tmp_str_arg_value_3, tmp_iterable_value_3);
            if (tmp_kw_call_value_1_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_85);

                exception_lineno = 542;

                goto tuple_build_exception_3;
            }
            frame_frame_pandas$core$config_init->m_frame.f_lineno = 542;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_4};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_85, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_kw_call_value_1_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 542;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_value_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_value_3);
        goto try_except_handler_32;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts[228]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 539;
        tmp_call_result_58 = CALL_FUNCTION(tstate, tmp_called_value_84, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_call_result_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 539;

            goto try_except_handler_32;
        }
        Py_DECREF(tmp_call_result_58);
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_lineno_30 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_30 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 8.
    exception_preserved_8 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_30);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_30);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_30, exception_tb);
        } else if (exception_keeper_lineno_30 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_30);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_30, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_30);
    // Tried code:
    {
        bool tmp_condition_result_30;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        tmp_cmp_expr_left_22 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_22 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        nuitka_bool tmp_assign_source_107;
        tmp_assign_source_107 = NUITKA_BOOL_FALSE;
        tmp_with_8__indicator = tmp_assign_source_107;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_called_value_86;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        CHECK_OBJECT(tmp_with_8__exit);
        tmp_called_value_86 = tmp_with_8__exit;
        tmp_args_element_value_35 = EXC_TYPE(tstate);
        tmp_args_element_value_36 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_36); 
        tmp_args_element_value_37 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 543;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_operand_value_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_86, call_args);
        }

        if (tmp_operand_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 543;

            goto try_except_handler_33;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        Py_DECREF(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 543;

            goto try_except_handler_33;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 543;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_33;
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 538;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_33;
    branch_end_30:;
    goto try_end_31;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_lineno_31 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_31 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_8);

    // Re-raise.
    exception_state = exception_keeper_name_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_31;
    // End of try:
    try_end_31:;
    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_8);

    goto try_end_30;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_30:;
    goto try_end_32;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_lineno_32 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_32 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_32;
        nuitka_bool tmp_cmp_expr_left_23;
        nuitka_bool tmp_cmp_expr_right_23;
        assert(tmp_with_8__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_23 = tmp_with_8__indicator;
        tmp_cmp_expr_right_23 = NUITKA_BOOL_TRUE;
        tmp_condition_result_32 = (tmp_cmp_expr_left_23 == tmp_cmp_expr_right_23) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_call_result_59;
        CHECK_OBJECT(tmp_with_8__exit);
        tmp_called_value_87 = tmp_with_8__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 543;
        tmp_call_result_59 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_87, mod_consts[71]);

        if (tmp_call_result_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_32);

            exception_lineno = 543;

            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_59);
    }
    branch_no_32:;
    // Re-raise.
    exception_state = exception_keeper_name_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_30;
    // End of try:
    try_end_32:;
    {
        bool tmp_condition_result_33;
        nuitka_bool tmp_cmp_expr_left_24;
        nuitka_bool tmp_cmp_expr_right_24;
        assert(tmp_with_8__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_24 = tmp_with_8__indicator;
        tmp_cmp_expr_right_24 = NUITKA_BOOL_TRUE;
        tmp_condition_result_33 = (tmp_cmp_expr_left_24 == tmp_cmp_expr_right_24) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_call_result_60;
        CHECK_OBJECT(tmp_with_8__exit);
        tmp_called_value_88 = tmp_with_8__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 543;
        tmp_call_result_60 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_88, mod_consts[71]);

        if (tmp_call_result_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 543;

            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_60);
    }
    branch_no_33:;
    goto try_end_33;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_lineno_33 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_33 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_8__source);
    tmp_with_8__source = NULL;
    Py_XDECREF(tmp_with_8__enter);
    tmp_with_8__enter = NULL;
    Py_XDECREF(tmp_with_8__exit);
    tmp_with_8__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_33:;
    CHECK_OBJECT(tmp_with_8__source);
    Py_DECREF(tmp_with_8__source);
    tmp_with_8__source = NULL;
    CHECK_OBJECT(tmp_with_8__enter);
    Py_DECREF(tmp_with_8__enter);
    tmp_with_8__enter = NULL;
    CHECK_OBJECT(tmp_with_8__exit);
    Py_DECREF(tmp_with_8__exit);
    tmp_with_8__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_instance_9;
        tmp_called_instance_9 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 547;

            goto try_except_handler_34;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 547;
        tmp_assign_source_108 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_9,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[233], 0)
        );

        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 547;

            goto try_except_handler_34;
        }
        assert(tmp_with_9__source == NULL);
        tmp_with_9__source = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_63;
        CHECK_OBJECT(tmp_with_9__source);
        tmp_expression_value_63 = tmp_with_9__source;
        tmp_called_value_89 = LOOKUP_SPECIAL(tstate, tmp_expression_value_63, mod_consts[64]);
        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 547;

            goto try_except_handler_34;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 547;
        tmp_assign_source_109 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_89);
        Py_DECREF(tmp_called_value_89);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 547;

            goto try_except_handler_34;
        }
        assert(tmp_with_9__enter == NULL);
        tmp_with_9__enter = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_with_9__source);
        tmp_expression_value_64 = tmp_with_9__source;
        tmp_assign_source_110 = LOOKUP_SPECIAL(tstate, tmp_expression_value_64, mod_consts[65]);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 547;

            goto try_except_handler_34;
        }
        assert(tmp_with_9__exit == NULL);
        tmp_with_9__exit = tmp_assign_source_110;
    }
    {
        nuitka_bool tmp_assign_source_111;
        tmp_assign_source_111 = NUITKA_BOOL_TRUE;
        tmp_with_9__indicator = tmp_assign_source_111;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_61;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_4;
        tmp_expression_value_65 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_65 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 548;

            goto try_except_handler_36;
        }
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[66]);
        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 548;

            goto try_except_handler_36;
        }
        tmp_tuple_element_4 = mod_consts[222];
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_value_91;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_kw_call_value_0_6;
            PyObject *tmp_kw_call_value_1_5;
            PyObject *tmp_str_arg_value_4;
            PyObject *tmp_iterable_value_4;
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
            tmp_expression_value_66 = module_var_accessor_pandas$core$config_init_$$_reader_engine_doc(tstate);
            if (unlikely(tmp_expression_value_66 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[211]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 551;

                goto tuple_build_exception_4;
            }
            tmp_called_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[224]);
            if (tmp_called_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 551;

                goto tuple_build_exception_4;
            }
            tmp_kw_call_value_0_6 = mod_consts[234];
            tmp_str_arg_value_4 = mod_consts[226];
            tmp_iterable_value_4 = module_var_accessor_pandas$core$config_init_$$__ods_options(tstate);
            if (unlikely(tmp_iterable_value_4 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[218]);
            }

            if (tmp_iterable_value_4 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_91);

                exception_lineno = 551;

                goto tuple_build_exception_4;
            }
            tmp_kw_call_value_1_5 = UNICODE_JOIN(tstate, tmp_str_arg_value_4, tmp_iterable_value_4);
            if (tmp_kw_call_value_1_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_91);

                exception_lineno = 551;

                goto tuple_build_exception_4;
            }
            frame_frame_pandas$core$config_init->m_frame.f_lineno = 551;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_5};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_91, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_kw_call_value_1_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 551;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_args_value_4, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_value_4);
        goto try_except_handler_36;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_kwargs_value_4 = DICT_COPY(tstate, mod_consts[228]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 548;
        tmp_call_result_61 = CALL_FUNCTION(tstate, tmp_called_value_90, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_call_result_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 548;

            goto try_except_handler_36;
        }
        Py_DECREF(tmp_call_result_61);
    }
    goto try_end_34;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_lineno_34 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_34 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 9.
    exception_preserved_9 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_34);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_34);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_34, exception_tb);
        } else if (exception_keeper_lineno_34 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_34);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_34, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_34);
    // Tried code:
    {
        bool tmp_condition_result_34;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        tmp_cmp_expr_left_25 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_25 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        nuitka_bool tmp_assign_source_112;
        tmp_assign_source_112 = NUITKA_BOOL_FALSE;
        tmp_with_9__indicator = tmp_assign_source_112;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        CHECK_OBJECT(tmp_with_9__exit);
        tmp_called_value_92 = tmp_with_9__exit;
        tmp_args_element_value_38 = EXC_TYPE(tstate);
        tmp_args_element_value_39 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_39); 
        tmp_args_element_value_40 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 552;
        {
            PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_operand_value_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_92, call_args);
        }

        if (tmp_operand_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 552;

            goto try_except_handler_37;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        Py_DECREF(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 552;

            goto try_except_handler_37;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 552;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_37;
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 547;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_37;
    branch_end_34:;
    goto try_end_35;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_lineno_35 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_35 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_9);

    // Re-raise.
    exception_state = exception_keeper_name_35;
    exception_lineno = exception_keeper_lineno_35;

    goto try_except_handler_35;
    // End of try:
    try_end_35:;
    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_9);

    goto try_end_34;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_34:;
    goto try_end_36;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_lineno_36 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_36 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_36;
        nuitka_bool tmp_cmp_expr_left_26;
        nuitka_bool tmp_cmp_expr_right_26;
        assert(tmp_with_9__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_26 = tmp_with_9__indicator;
        tmp_cmp_expr_right_26 = NUITKA_BOOL_TRUE;
        tmp_condition_result_36 = (tmp_cmp_expr_left_26 == tmp_cmp_expr_right_26) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_call_result_62;
        CHECK_OBJECT(tmp_with_9__exit);
        tmp_called_value_93 = tmp_with_9__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 552;
        tmp_call_result_62 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_93, mod_consts[71]);

        if (tmp_call_result_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_36);

            exception_lineno = 552;

            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_62);
    }
    branch_no_36:;
    // Re-raise.
    exception_state = exception_keeper_name_36;
    exception_lineno = exception_keeper_lineno_36;

    goto try_except_handler_34;
    // End of try:
    try_end_36:;
    {
        bool tmp_condition_result_37;
        nuitka_bool tmp_cmp_expr_left_27;
        nuitka_bool tmp_cmp_expr_right_27;
        assert(tmp_with_9__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_27 = tmp_with_9__indicator;
        tmp_cmp_expr_right_27 = NUITKA_BOOL_TRUE;
        tmp_condition_result_37 = (tmp_cmp_expr_left_27 == tmp_cmp_expr_right_27) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_call_result_63;
        CHECK_OBJECT(tmp_with_9__exit);
        tmp_called_value_94 = tmp_with_9__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 552;
        tmp_call_result_63 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_94, mod_consts[71]);

        if (tmp_call_result_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 552;

            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_63);
    }
    branch_no_37:;
    goto try_end_37;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_lineno_37 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_37 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_9__source);
    tmp_with_9__source = NULL;
    Py_XDECREF(tmp_with_9__enter);
    tmp_with_9__enter = NULL;
    Py_XDECREF(tmp_with_9__exit);
    tmp_with_9__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_37:;
    CHECK_OBJECT(tmp_with_9__source);
    Py_DECREF(tmp_with_9__source);
    tmp_with_9__source = NULL;
    CHECK_OBJECT(tmp_with_9__enter);
    Py_DECREF(tmp_with_9__enter);
    tmp_with_9__enter = NULL;
    CHECK_OBJECT(tmp_with_9__exit);
    Py_DECREF(tmp_with_9__exit);
    tmp_with_9__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_instance_10;
        tmp_called_instance_10 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 555;

            goto try_except_handler_38;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 555;
        tmp_assign_source_113 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_10,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[235], 0)
        );

        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 555;

            goto try_except_handler_38;
        }
        assert(tmp_with_10__source == NULL);
        tmp_with_10__source = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_67;
        CHECK_OBJECT(tmp_with_10__source);
        tmp_expression_value_67 = tmp_with_10__source;
        tmp_called_value_95 = LOOKUP_SPECIAL(tstate, tmp_expression_value_67, mod_consts[64]);
        if (tmp_called_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 555;

            goto try_except_handler_38;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 555;
        tmp_assign_source_114 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_95);
        Py_DECREF(tmp_called_value_95);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 555;

            goto try_except_handler_38;
        }
        assert(tmp_with_10__enter == NULL);
        tmp_with_10__enter = tmp_assign_source_114;
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_with_10__source);
        tmp_expression_value_68 = tmp_with_10__source;
        tmp_assign_source_115 = LOOKUP_SPECIAL(tstate, tmp_expression_value_68, mod_consts[65]);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 555;

            goto try_except_handler_38;
        }
        assert(tmp_with_10__exit == NULL);
        tmp_with_10__exit = tmp_assign_source_115;
    }
    {
        nuitka_bool tmp_assign_source_116;
        tmp_assign_source_116 = NUITKA_BOOL_TRUE;
        tmp_with_10__indicator = tmp_assign_source_116;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_call_result_64;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_5;
        tmp_expression_value_69 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_69 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 556;

            goto try_except_handler_40;
        }
        tmp_called_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[66]);
        if (tmp_called_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 556;

            goto try_except_handler_40;
        }
        tmp_tuple_element_5 = mod_consts[222];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_value_97;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_kw_call_value_0_7;
            PyObject *tmp_kw_call_value_1_6;
            PyObject *tmp_str_arg_value_5;
            PyObject *tmp_iterable_value_5;
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_5);
            tmp_expression_value_70 = module_var_accessor_pandas$core$config_init_$$_reader_engine_doc(tstate);
            if (unlikely(tmp_expression_value_70 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[211]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 559;

                goto tuple_build_exception_5;
            }
            tmp_called_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[224]);
            if (tmp_called_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 559;

                goto tuple_build_exception_5;
            }
            tmp_kw_call_value_0_7 = mod_consts[236];
            tmp_str_arg_value_5 = mod_consts[226];
            tmp_iterable_value_5 = module_var_accessor_pandas$core$config_init_$$__xlsb_options(tstate);
            if (unlikely(tmp_iterable_value_5 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[220]);
            }

            if (tmp_iterable_value_5 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_97);

                exception_lineno = 559;

                goto tuple_build_exception_5;
            }
            tmp_kw_call_value_1_6 = UNICODE_JOIN(tstate, tmp_str_arg_value_5, tmp_iterable_value_5);
            if (tmp_kw_call_value_1_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_97);

                exception_lineno = 559;

                goto tuple_build_exception_5;
            }
            frame_frame_pandas$core$config_init->m_frame.f_lineno = 559;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_6};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_97, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_kw_call_value_1_6);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 559;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_value_5, 2, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_value_5);
        goto try_except_handler_40;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_kwargs_value_5 = DICT_COPY(tstate, mod_consts[228]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 556;
        tmp_call_result_64 = CALL_FUNCTION(tstate, tmp_called_value_96, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_5);
        if (tmp_call_result_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 556;

            goto try_except_handler_40;
        }
        Py_DECREF(tmp_call_result_64);
    }
    goto try_end_38;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_lineno_38 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_38 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 10.
    exception_preserved_10 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_38);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_38);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_38, exception_tb);
        } else if (exception_keeper_lineno_38 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_38);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_38, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_38);
    // Tried code:
    {
        bool tmp_condition_result_38;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        tmp_cmp_expr_left_28 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_28 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_38 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        nuitka_bool tmp_assign_source_117;
        tmp_assign_source_117 = NUITKA_BOOL_FALSE;
        tmp_with_10__indicator = tmp_assign_source_117;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_called_value_98;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        CHECK_OBJECT(tmp_with_10__exit);
        tmp_called_value_98 = tmp_with_10__exit;
        tmp_args_element_value_41 = EXC_TYPE(tstate);
        tmp_args_element_value_42 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_42); 
        tmp_args_element_value_43 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 560;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43};
            tmp_operand_value_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_98, call_args);
        }

        if (tmp_operand_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 560;

            goto try_except_handler_41;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        Py_DECREF(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 560;

            goto try_except_handler_41;
        }
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 560;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_41;
    branch_no_39:;
    goto branch_end_38;
    branch_no_38:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 555;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_41;
    branch_end_38:;
    goto try_end_39;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_lineno_39 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_39 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_10);

    // Re-raise.
    exception_state = exception_keeper_name_39;
    exception_lineno = exception_keeper_lineno_39;

    goto try_except_handler_39;
    // End of try:
    try_end_39:;
    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_10);

    goto try_end_38;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_38:;
    goto try_end_40;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_lineno_40 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_40 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_40;
        nuitka_bool tmp_cmp_expr_left_29;
        nuitka_bool tmp_cmp_expr_right_29;
        assert(tmp_with_10__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_29 = tmp_with_10__indicator;
        tmp_cmp_expr_right_29 = NUITKA_BOOL_TRUE;
        tmp_condition_result_40 = (tmp_cmp_expr_left_29 == tmp_cmp_expr_right_29) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_called_value_99;
        PyObject *tmp_call_result_65;
        CHECK_OBJECT(tmp_with_10__exit);
        tmp_called_value_99 = tmp_with_10__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 560;
        tmp_call_result_65 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_99, mod_consts[71]);

        if (tmp_call_result_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_40);

            exception_lineno = 560;

            goto try_except_handler_38;
        }
        Py_DECREF(tmp_call_result_65);
    }
    branch_no_40:;
    // Re-raise.
    exception_state = exception_keeper_name_40;
    exception_lineno = exception_keeper_lineno_40;

    goto try_except_handler_38;
    // End of try:
    try_end_40:;
    {
        bool tmp_condition_result_41;
        nuitka_bool tmp_cmp_expr_left_30;
        nuitka_bool tmp_cmp_expr_right_30;
        assert(tmp_with_10__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_30 = tmp_with_10__indicator;
        tmp_cmp_expr_right_30 = NUITKA_BOOL_TRUE;
        tmp_condition_result_41 = (tmp_cmp_expr_left_30 == tmp_cmp_expr_right_30) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_call_result_66;
        CHECK_OBJECT(tmp_with_10__exit);
        tmp_called_value_100 = tmp_with_10__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 560;
        tmp_call_result_66 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_100, mod_consts[71]);

        if (tmp_call_result_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 560;

            goto try_except_handler_38;
        }
        Py_DECREF(tmp_call_result_66);
    }
    branch_no_41:;
    goto try_end_41;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_lineno_41 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_41 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_10__source);
    tmp_with_10__source = NULL;
    Py_XDECREF(tmp_with_10__enter);
    tmp_with_10__enter = NULL;
    Py_XDECREF(tmp_with_10__exit);
    tmp_with_10__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_41:;
    CHECK_OBJECT(tmp_with_10__source);
    Py_DECREF(tmp_with_10__source);
    tmp_with_10__source = NULL;
    CHECK_OBJECT(tmp_with_10__enter);
    Py_DECREF(tmp_with_10__enter);
    tmp_with_10__enter = NULL;
    CHECK_OBJECT(tmp_with_10__exit);
    Py_DECREF(tmp_with_10__exit);
    tmp_with_10__exit = NULL;
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[237];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = MAKE_LIST1(tstate, mod_consts[239]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = MAKE_LIST1(tstate, mod_consts[214]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = MAKE_LIST2(tstate, mod_consts[214],mod_consts[240]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = MAKE_LIST1(tstate, mod_consts[217]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_122);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_instance_11;
        tmp_called_instance_11 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 576;

            goto try_except_handler_42;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 576;
        tmp_assign_source_123 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_11,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[221], 0)
        );

        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 576;

            goto try_except_handler_42;
        }
        assert(tmp_with_11__source == NULL);
        tmp_with_11__source = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_101;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(tmp_with_11__source);
        tmp_expression_value_71 = tmp_with_11__source;
        tmp_called_value_101 = LOOKUP_SPECIAL(tstate, tmp_expression_value_71, mod_consts[64]);
        if (tmp_called_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 576;

            goto try_except_handler_42;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 576;
        tmp_assign_source_124 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_101);
        Py_DECREF(tmp_called_value_101);
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 576;

            goto try_except_handler_42;
        }
        assert(tmp_with_11__enter == NULL);
        tmp_with_11__enter = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_with_11__source);
        tmp_expression_value_72 = tmp_with_11__source;
        tmp_assign_source_125 = LOOKUP_SPECIAL(tstate, tmp_expression_value_72, mod_consts[65]);
        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 576;

            goto try_except_handler_42;
        }
        assert(tmp_with_11__exit == NULL);
        tmp_with_11__exit = tmp_assign_source_125;
    }
    {
        nuitka_bool tmp_assign_source_126;
        tmp_assign_source_126 = NUITKA_BOOL_TRUE;
        tmp_with_11__indicator = tmp_assign_source_126;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_call_result_67;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_6;
        tmp_expression_value_73 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_73 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 577;

            goto try_except_handler_44;
        }
        tmp_called_value_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[66]);
        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 577;

            goto try_except_handler_44;
        }
        tmp_tuple_element_6 = mod_consts[241];
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_value_103;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_kw_call_value_0_8;
            PyObject *tmp_kw_call_value_1_7;
            PyObject *tmp_str_arg_value_6;
            PyObject *tmp_iterable_value_6;
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_6);
            tmp_expression_value_74 = module_var_accessor_pandas$core$config_init_$$_writer_engine_doc(tstate);
            if (unlikely(tmp_expression_value_74 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[238]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 580;

                goto tuple_build_exception_6;
            }
            tmp_called_value_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[224]);
            if (tmp_called_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 580;

                goto tuple_build_exception_6;
            }
            tmp_kw_call_value_0_8 = mod_consts[225];
            tmp_str_arg_value_6 = mod_consts[226];
            tmp_iterable_value_6 = module_var_accessor_pandas$core$config_init_$$__xls_options(tstate);
            if (unlikely(tmp_iterable_value_6 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[213]);
            }

            if (tmp_iterable_value_6 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_103);

                exception_lineno = 580;

                goto tuple_build_exception_6;
            }
            tmp_kw_call_value_1_7 = UNICODE_JOIN(tstate, tmp_str_arg_value_6, tmp_iterable_value_6);
            if (tmp_kw_call_value_1_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_103);

                exception_lineno = 580;

                goto tuple_build_exception_6;
            }
            frame_frame_pandas$core$config_init->m_frame.f_lineno = 580;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_7};

                tmp_tuple_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_103, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_kw_call_value_1_7);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 580;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_6, 2, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_value_6);
        goto try_except_handler_44;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_kwargs_value_6 = DICT_COPY(tstate, mod_consts[228]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 577;
        tmp_call_result_67 = CALL_FUNCTION(tstate, tmp_called_value_102, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_value_6);
        Py_DECREF(tmp_kwargs_value_6);
        if (tmp_call_result_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 577;

            goto try_except_handler_44;
        }
        Py_DECREF(tmp_call_result_67);
    }
    goto try_end_42;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_lineno_42 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_42 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 11.
    exception_preserved_11 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_42);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_42);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_42, exception_tb);
        } else if (exception_keeper_lineno_42 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_42);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_42, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_42);
    // Tried code:
    {
        bool tmp_condition_result_42;
        PyObject *tmp_cmp_expr_left_31;
        PyObject *tmp_cmp_expr_right_31;
        tmp_cmp_expr_left_31 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_31 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_42 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        nuitka_bool tmp_assign_source_127;
        tmp_assign_source_127 = NUITKA_BOOL_FALSE;
        tmp_with_11__indicator = tmp_assign_source_127;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_called_value_104;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        CHECK_OBJECT(tmp_with_11__exit);
        tmp_called_value_104 = tmp_with_11__exit;
        tmp_args_element_value_44 = EXC_TYPE(tstate);
        tmp_args_element_value_45 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_45); 
        tmp_args_element_value_46 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 581;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_operand_value_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_104, call_args);
        }

        if (tmp_operand_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 581;

            goto try_except_handler_45;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        Py_DECREF(tmp_operand_value_11);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 581;

            goto try_except_handler_45;
        }
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 581;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_45;
    branch_no_43:;
    goto branch_end_42;
    branch_no_42:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 576;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_45;
    branch_end_42:;
    goto try_end_43;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_lineno_43 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_43 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_11);

    // Re-raise.
    exception_state = exception_keeper_name_43;
    exception_lineno = exception_keeper_lineno_43;

    goto try_except_handler_43;
    // End of try:
    try_end_43:;
    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_11);

    goto try_end_42;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_42:;
    goto try_end_44;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_lineno_44 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_44 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_44;
        nuitka_bool tmp_cmp_expr_left_32;
        nuitka_bool tmp_cmp_expr_right_32;
        assert(tmp_with_11__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_32 = tmp_with_11__indicator;
        tmp_cmp_expr_right_32 = NUITKA_BOOL_TRUE;
        tmp_condition_result_44 = (tmp_cmp_expr_left_32 == tmp_cmp_expr_right_32) ? true : false;
        if (tmp_condition_result_44 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_called_value_105;
        PyObject *tmp_call_result_68;
        CHECK_OBJECT(tmp_with_11__exit);
        tmp_called_value_105 = tmp_with_11__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 581;
        tmp_call_result_68 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_105, mod_consts[71]);

        if (tmp_call_result_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_44);

            exception_lineno = 581;

            goto try_except_handler_42;
        }
        Py_DECREF(tmp_call_result_68);
    }
    branch_no_44:;
    // Re-raise.
    exception_state = exception_keeper_name_44;
    exception_lineno = exception_keeper_lineno_44;

    goto try_except_handler_42;
    // End of try:
    try_end_44:;
    {
        bool tmp_condition_result_45;
        nuitka_bool tmp_cmp_expr_left_33;
        nuitka_bool tmp_cmp_expr_right_33;
        assert(tmp_with_11__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_33 = tmp_with_11__indicator;
        tmp_cmp_expr_right_33 = NUITKA_BOOL_TRUE;
        tmp_condition_result_45 = (tmp_cmp_expr_left_33 == tmp_cmp_expr_right_33) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_call_result_69;
        CHECK_OBJECT(tmp_with_11__exit);
        tmp_called_value_106 = tmp_with_11__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 581;
        tmp_call_result_69 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_106, mod_consts[71]);

        if (tmp_call_result_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 581;

            goto try_except_handler_42;
        }
        Py_DECREF(tmp_call_result_69);
    }
    branch_no_45:;
    goto try_end_45;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_lineno_45 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_45 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_11__source);
    tmp_with_11__source = NULL;
    Py_XDECREF(tmp_with_11__enter);
    tmp_with_11__enter = NULL;
    Py_XDECREF(tmp_with_11__exit);
    tmp_with_11__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_45:;
    CHECK_OBJECT(tmp_with_11__source);
    Py_DECREF(tmp_with_11__source);
    tmp_with_11__source = NULL;
    CHECK_OBJECT(tmp_with_11__enter);
    Py_DECREF(tmp_with_11__enter);
    tmp_with_11__enter = NULL;
    CHECK_OBJECT(tmp_with_11__exit);
    Py_DECREF(tmp_with_11__exit);
    tmp_with_11__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_instance_12;
        tmp_called_instance_12 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 584;

            goto try_except_handler_46;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 584;
        tmp_assign_source_128 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_12,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[229], 0)
        );

        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 584;

            goto try_except_handler_46;
        }
        assert(tmp_with_12__source == NULL);
        tmp_with_12__source = tmp_assign_source_128;
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_107;
        PyObject *tmp_expression_value_75;
        CHECK_OBJECT(tmp_with_12__source);
        tmp_expression_value_75 = tmp_with_12__source;
        tmp_called_value_107 = LOOKUP_SPECIAL(tstate, tmp_expression_value_75, mod_consts[64]);
        if (tmp_called_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 584;

            goto try_except_handler_46;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 584;
        tmp_assign_source_129 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_107);
        Py_DECREF(tmp_called_value_107);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 584;

            goto try_except_handler_46;
        }
        assert(tmp_with_12__enter == NULL);
        tmp_with_12__enter = tmp_assign_source_129;
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_with_12__source);
        tmp_expression_value_76 = tmp_with_12__source;
        tmp_assign_source_130 = LOOKUP_SPECIAL(tstate, tmp_expression_value_76, mod_consts[65]);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 584;

            goto try_except_handler_46;
        }
        assert(tmp_with_12__exit == NULL);
        tmp_with_12__exit = tmp_assign_source_130;
    }
    {
        nuitka_bool tmp_assign_source_131;
        tmp_assign_source_131 = NUITKA_BOOL_TRUE;
        tmp_with_12__indicator = tmp_assign_source_131;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_call_result_70;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_7;
        tmp_expression_value_77 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_77 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 585;

            goto try_except_handler_48;
        }
        tmp_called_value_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[66]);
        if (tmp_called_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 585;

            goto try_except_handler_48;
        }
        tmp_tuple_element_7 = mod_consts[241];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_value_109;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_kw_call_value_0_9;
            PyObject *tmp_kw_call_value_1_8;
            PyObject *tmp_str_arg_value_7;
            PyObject *tmp_iterable_value_7;
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_7);
            tmp_expression_value_78 = module_var_accessor_pandas$core$config_init_$$_writer_engine_doc(tstate);
            if (unlikely(tmp_expression_value_78 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[238]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 588;

                goto tuple_build_exception_7;
            }
            tmp_called_value_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[224]);
            if (tmp_called_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 588;

                goto tuple_build_exception_7;
            }
            tmp_kw_call_value_0_9 = mod_consts[230];
            tmp_str_arg_value_7 = mod_consts[226];
            tmp_iterable_value_7 = module_var_accessor_pandas$core$config_init_$$__xlsm_options(tstate);
            if (unlikely(tmp_iterable_value_7 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[215]);
            }

            if (tmp_iterable_value_7 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_109);

                exception_lineno = 588;

                goto tuple_build_exception_7;
            }
            tmp_kw_call_value_1_8 = UNICODE_JOIN(tstate, tmp_str_arg_value_7, tmp_iterable_value_7);
            if (tmp_kw_call_value_1_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_109);

                exception_lineno = 588;

                goto tuple_build_exception_7;
            }
            frame_frame_pandas$core$config_init->m_frame.f_lineno = 588;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_8};

                tmp_tuple_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_109, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_kw_call_value_1_8);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 588;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_args_value_7, 2, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_args_value_7);
        goto try_except_handler_48;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_kwargs_value_7 = DICT_COPY(tstate, mod_consts[228]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 585;
        tmp_call_result_70 = CALL_FUNCTION(tstate, tmp_called_value_108, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_args_value_7);
        Py_DECREF(tmp_kwargs_value_7);
        if (tmp_call_result_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 585;

            goto try_except_handler_48;
        }
        Py_DECREF(tmp_call_result_70);
    }
    goto try_end_46;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_lineno_46 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_46 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 12.
    exception_preserved_12 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_46);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_46);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_46, exception_tb);
        } else if (exception_keeper_lineno_46 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_46);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_46, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_46);
    // Tried code:
    {
        bool tmp_condition_result_46;
        PyObject *tmp_cmp_expr_left_34;
        PyObject *tmp_cmp_expr_right_34;
        tmp_cmp_expr_left_34 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_34 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_34, tmp_cmp_expr_right_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_46 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_46 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        nuitka_bool tmp_assign_source_132;
        tmp_assign_source_132 = NUITKA_BOOL_FALSE;
        tmp_with_12__indicator = tmp_assign_source_132;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_called_value_110;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        CHECK_OBJECT(tmp_with_12__exit);
        tmp_called_value_110 = tmp_with_12__exit;
        tmp_args_element_value_47 = EXC_TYPE(tstate);
        tmp_args_element_value_48 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_48); 
        tmp_args_element_value_49 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 589;
        {
            PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_operand_value_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_110, call_args);
        }

        if (tmp_operand_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 589;

            goto try_except_handler_49;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        Py_DECREF(tmp_operand_value_12);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 589;

            goto try_except_handler_49;
        }
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 589;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_49;
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 584;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_49;
    branch_end_46:;
    goto try_end_47;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_lineno_47 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_47 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_12);

    // Re-raise.
    exception_state = exception_keeper_name_47;
    exception_lineno = exception_keeper_lineno_47;

    goto try_except_handler_47;
    // End of try:
    try_end_47:;
    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_12);

    goto try_end_46;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_46:;
    goto try_end_48;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_lineno_48 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_48 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_48;
        nuitka_bool tmp_cmp_expr_left_35;
        nuitka_bool tmp_cmp_expr_right_35;
        assert(tmp_with_12__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_35 = tmp_with_12__indicator;
        tmp_cmp_expr_right_35 = NUITKA_BOOL_TRUE;
        tmp_condition_result_48 = (tmp_cmp_expr_left_35 == tmp_cmp_expr_right_35) ? true : false;
        if (tmp_condition_result_48 != false) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_called_value_111;
        PyObject *tmp_call_result_71;
        CHECK_OBJECT(tmp_with_12__exit);
        tmp_called_value_111 = tmp_with_12__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 589;
        tmp_call_result_71 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_111, mod_consts[71]);

        if (tmp_call_result_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_48);

            exception_lineno = 589;

            goto try_except_handler_46;
        }
        Py_DECREF(tmp_call_result_71);
    }
    branch_no_48:;
    // Re-raise.
    exception_state = exception_keeper_name_48;
    exception_lineno = exception_keeper_lineno_48;

    goto try_except_handler_46;
    // End of try:
    try_end_48:;
    {
        bool tmp_condition_result_49;
        nuitka_bool tmp_cmp_expr_left_36;
        nuitka_bool tmp_cmp_expr_right_36;
        assert(tmp_with_12__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_36 = tmp_with_12__indicator;
        tmp_cmp_expr_right_36 = NUITKA_BOOL_TRUE;
        tmp_condition_result_49 = (tmp_cmp_expr_left_36 == tmp_cmp_expr_right_36) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_called_value_112;
        PyObject *tmp_call_result_72;
        CHECK_OBJECT(tmp_with_12__exit);
        tmp_called_value_112 = tmp_with_12__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 589;
        tmp_call_result_72 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_112, mod_consts[71]);

        if (tmp_call_result_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 589;

            goto try_except_handler_46;
        }
        Py_DECREF(tmp_call_result_72);
    }
    branch_no_49:;
    goto try_end_49;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_lineno_49 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_49 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_12__source);
    tmp_with_12__source = NULL;
    Py_XDECREF(tmp_with_12__enter);
    tmp_with_12__enter = NULL;
    Py_XDECREF(tmp_with_12__exit);
    tmp_with_12__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_49:;
    CHECK_OBJECT(tmp_with_12__source);
    Py_DECREF(tmp_with_12__source);
    tmp_with_12__source = NULL;
    CHECK_OBJECT(tmp_with_12__enter);
    Py_DECREF(tmp_with_12__enter);
    tmp_with_12__enter = NULL;
    CHECK_OBJECT(tmp_with_12__exit);
    Py_DECREF(tmp_with_12__exit);
    tmp_with_12__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_instance_13;
        tmp_called_instance_13 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 593;

            goto try_except_handler_50;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 593;
        tmp_assign_source_133 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_13,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[231], 0)
        );

        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 593;

            goto try_except_handler_50;
        }
        assert(tmp_with_13__source == NULL);
        tmp_with_13__source = tmp_assign_source_133;
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_113;
        PyObject *tmp_expression_value_79;
        CHECK_OBJECT(tmp_with_13__source);
        tmp_expression_value_79 = tmp_with_13__source;
        tmp_called_value_113 = LOOKUP_SPECIAL(tstate, tmp_expression_value_79, mod_consts[64]);
        if (tmp_called_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 593;

            goto try_except_handler_50;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 593;
        tmp_assign_source_134 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_113);
        Py_DECREF(tmp_called_value_113);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 593;

            goto try_except_handler_50;
        }
        assert(tmp_with_13__enter == NULL);
        tmp_with_13__enter = tmp_assign_source_134;
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_expression_value_80;
        CHECK_OBJECT(tmp_with_13__source);
        tmp_expression_value_80 = tmp_with_13__source;
        tmp_assign_source_135 = LOOKUP_SPECIAL(tstate, tmp_expression_value_80, mod_consts[65]);
        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 593;

            goto try_except_handler_50;
        }
        assert(tmp_with_13__exit == NULL);
        tmp_with_13__exit = tmp_assign_source_135;
    }
    {
        nuitka_bool tmp_assign_source_136;
        tmp_assign_source_136 = NUITKA_BOOL_TRUE;
        tmp_with_13__indicator = tmp_assign_source_136;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_call_result_73;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_8;
        tmp_expression_value_81 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_81 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 594;

            goto try_except_handler_52;
        }
        tmp_called_value_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[66]);
        if (tmp_called_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 594;

            goto try_except_handler_52;
        }
        tmp_tuple_element_8 = mod_consts[241];
        tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_value_115;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_kw_call_value_0_10;
            PyObject *tmp_kw_call_value_1_9;
            PyObject *tmp_str_arg_value_8;
            PyObject *tmp_iterable_value_8;
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_8);
            tmp_expression_value_82 = module_var_accessor_pandas$core$config_init_$$_writer_engine_doc(tstate);
            if (unlikely(tmp_expression_value_82 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[238]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 597;

                goto tuple_build_exception_8;
            }
            tmp_called_value_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[224]);
            if (tmp_called_value_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 597;

                goto tuple_build_exception_8;
            }
            tmp_kw_call_value_0_10 = mod_consts[232];
            tmp_str_arg_value_8 = mod_consts[226];
            tmp_iterable_value_8 = module_var_accessor_pandas$core$config_init_$$__xlsx_options(tstate);
            if (unlikely(tmp_iterable_value_8 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[216]);
            }

            if (tmp_iterable_value_8 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_115);

                exception_lineno = 597;

                goto tuple_build_exception_8;
            }
            tmp_kw_call_value_1_9 = UNICODE_JOIN(tstate, tmp_str_arg_value_8, tmp_iterable_value_8);
            if (tmp_kw_call_value_1_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_115);

                exception_lineno = 597;

                goto tuple_build_exception_8;
            }
            frame_frame_pandas$core$config_init->m_frame.f_lineno = 597;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_9};

                tmp_tuple_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_115, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_kw_call_value_1_9);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 597;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_args_value_8, 2, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_args_value_8);
        goto try_except_handler_52;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_kwargs_value_8 = DICT_COPY(tstate, mod_consts[228]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 594;
        tmp_call_result_73 = CALL_FUNCTION(tstate, tmp_called_value_114, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_args_value_8);
        Py_DECREF(tmp_kwargs_value_8);
        if (tmp_call_result_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 594;

            goto try_except_handler_52;
        }
        Py_DECREF(tmp_call_result_73);
    }
    goto try_end_50;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_lineno_50 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_50 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 13.
    exception_preserved_13 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_50);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_50);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_50, exception_tb);
        } else if (exception_keeper_lineno_50 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_50);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_50, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_50);
    // Tried code:
    {
        bool tmp_condition_result_50;
        PyObject *tmp_cmp_expr_left_37;
        PyObject *tmp_cmp_expr_right_37;
        tmp_cmp_expr_left_37 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_37 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_37, tmp_cmp_expr_right_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_50 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        nuitka_bool tmp_assign_source_137;
        tmp_assign_source_137 = NUITKA_BOOL_FALSE;
        tmp_with_13__indicator = tmp_assign_source_137;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_called_value_116;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        CHECK_OBJECT(tmp_with_13__exit);
        tmp_called_value_116 = tmp_with_13__exit;
        tmp_args_element_value_50 = EXC_TYPE(tstate);
        tmp_args_element_value_51 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_51); 
        tmp_args_element_value_52 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 598;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
            tmp_operand_value_13 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_116, call_args);
        }

        if (tmp_operand_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 598;

            goto try_except_handler_53;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        Py_DECREF(tmp_operand_value_13);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 598;

            goto try_except_handler_53;
        }
        tmp_condition_result_51 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 598;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_53;
    branch_no_51:;
    goto branch_end_50;
    branch_no_50:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 593;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_53;
    branch_end_50:;
    goto try_end_51;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_lineno_51 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_51 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_13);

    // Re-raise.
    exception_state = exception_keeper_name_51;
    exception_lineno = exception_keeper_lineno_51;

    goto try_except_handler_51;
    // End of try:
    try_end_51:;
    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_13);

    goto try_end_50;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_50:;
    goto try_end_52;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_lineno_52 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_52 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_52;
        nuitka_bool tmp_cmp_expr_left_38;
        nuitka_bool tmp_cmp_expr_right_38;
        assert(tmp_with_13__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_38 = tmp_with_13__indicator;
        tmp_cmp_expr_right_38 = NUITKA_BOOL_TRUE;
        tmp_condition_result_52 = (tmp_cmp_expr_left_38 == tmp_cmp_expr_right_38) ? true : false;
        if (tmp_condition_result_52 != false) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_called_value_117;
        PyObject *tmp_call_result_74;
        CHECK_OBJECT(tmp_with_13__exit);
        tmp_called_value_117 = tmp_with_13__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 598;
        tmp_call_result_74 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_117, mod_consts[71]);

        if (tmp_call_result_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_52);

            exception_lineno = 598;

            goto try_except_handler_50;
        }
        Py_DECREF(tmp_call_result_74);
    }
    branch_no_52:;
    // Re-raise.
    exception_state = exception_keeper_name_52;
    exception_lineno = exception_keeper_lineno_52;

    goto try_except_handler_50;
    // End of try:
    try_end_52:;
    {
        bool tmp_condition_result_53;
        nuitka_bool tmp_cmp_expr_left_39;
        nuitka_bool tmp_cmp_expr_right_39;
        assert(tmp_with_13__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_39 = tmp_with_13__indicator;
        tmp_cmp_expr_right_39 = NUITKA_BOOL_TRUE;
        tmp_condition_result_53 = (tmp_cmp_expr_left_39 == tmp_cmp_expr_right_39) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_call_result_75;
        CHECK_OBJECT(tmp_with_13__exit);
        tmp_called_value_118 = tmp_with_13__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 598;
        tmp_call_result_75 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_118, mod_consts[71]);

        if (tmp_call_result_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 598;

            goto try_except_handler_50;
        }
        Py_DECREF(tmp_call_result_75);
    }
    branch_no_53:;
    goto try_end_53;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_lineno_53 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_53 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_13__source);
    tmp_with_13__source = NULL;
    Py_XDECREF(tmp_with_13__enter);
    tmp_with_13__enter = NULL;
    Py_XDECREF(tmp_with_13__exit);
    tmp_with_13__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_53:;
    CHECK_OBJECT(tmp_with_13__source);
    Py_DECREF(tmp_with_13__source);
    tmp_with_13__source = NULL;
    CHECK_OBJECT(tmp_with_13__enter);
    Py_DECREF(tmp_with_13__enter);
    tmp_with_13__enter = NULL;
    CHECK_OBJECT(tmp_with_13__exit);
    Py_DECREF(tmp_with_13__exit);
    tmp_with_13__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_instance_14;
        tmp_called_instance_14 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 602;

            goto try_except_handler_54;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 602;
        tmp_assign_source_138 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_14,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[233], 0)
        );

        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 602;

            goto try_except_handler_54;
        }
        assert(tmp_with_14__source == NULL);
        tmp_with_14__source = tmp_assign_source_138;
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_value_119;
        PyObject *tmp_expression_value_83;
        CHECK_OBJECT(tmp_with_14__source);
        tmp_expression_value_83 = tmp_with_14__source;
        tmp_called_value_119 = LOOKUP_SPECIAL(tstate, tmp_expression_value_83, mod_consts[64]);
        if (tmp_called_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 602;

            goto try_except_handler_54;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 602;
        tmp_assign_source_139 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_119);
        Py_DECREF(tmp_called_value_119);
        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 602;

            goto try_except_handler_54;
        }
        assert(tmp_with_14__enter == NULL);
        tmp_with_14__enter = tmp_assign_source_139;
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_expression_value_84;
        CHECK_OBJECT(tmp_with_14__source);
        tmp_expression_value_84 = tmp_with_14__source;
        tmp_assign_source_140 = LOOKUP_SPECIAL(tstate, tmp_expression_value_84, mod_consts[65]);
        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 602;

            goto try_except_handler_54;
        }
        assert(tmp_with_14__exit == NULL);
        tmp_with_14__exit = tmp_assign_source_140;
    }
    {
        nuitka_bool tmp_assign_source_141;
        tmp_assign_source_141 = NUITKA_BOOL_TRUE;
        tmp_with_14__indicator = tmp_assign_source_141;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_120;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_call_result_76;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_9;
        tmp_expression_value_85 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_85 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 603;

            goto try_except_handler_56;
        }
        tmp_called_value_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[66]);
        if (tmp_called_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 603;

            goto try_except_handler_56;
        }
        tmp_tuple_element_9 = mod_consts[241];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_called_value_121;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_kw_call_value_0_11;
            PyObject *tmp_kw_call_value_1_10;
            PyObject *tmp_str_arg_value_9;
            PyObject *tmp_iterable_value_9;
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[223];
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_9);
            tmp_expression_value_86 = module_var_accessor_pandas$core$config_init_$$_writer_engine_doc(tstate);
            if (unlikely(tmp_expression_value_86 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[238]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 606;

                goto tuple_build_exception_9;
            }
            tmp_called_value_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[224]);
            if (tmp_called_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 606;

                goto tuple_build_exception_9;
            }
            tmp_kw_call_value_0_11 = mod_consts[234];
            tmp_str_arg_value_9 = mod_consts[226];
            tmp_iterable_value_9 = module_var_accessor_pandas$core$config_init_$$__ods_options(tstate);
            if (unlikely(tmp_iterable_value_9 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[218]);
            }

            if (tmp_iterable_value_9 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));

                Py_DECREF(tmp_called_value_121);

                exception_lineno = 606;

                goto tuple_build_exception_9;
            }
            tmp_kw_call_value_1_10 = UNICODE_JOIN(tstate, tmp_str_arg_value_9, tmp_iterable_value_9);
            if (tmp_kw_call_value_1_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_121);

                exception_lineno = 606;

                goto tuple_build_exception_9;
            }
            frame_frame_pandas$core$config_init->m_frame.f_lineno = 606;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_10};

                tmp_tuple_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_121, kw_values, mod_consts[227]);
            }

            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_kw_call_value_1_10);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 606;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_args_value_9, 2, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_called_value_120);
        Py_DECREF(tmp_args_value_9);
        goto try_except_handler_56;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_kwargs_value_9 = DICT_COPY(tstate, mod_consts[228]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 603;
        tmp_call_result_76 = CALL_FUNCTION(tstate, tmp_called_value_120, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_120);
        Py_DECREF(tmp_args_value_9);
        Py_DECREF(tmp_kwargs_value_9);
        if (tmp_call_result_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 603;

            goto try_except_handler_56;
        }
        Py_DECREF(tmp_call_result_76);
    }
    goto try_end_54;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_lineno_54 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_54 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 14.
    exception_preserved_14 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_54);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_54);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_54, exception_tb);
        } else if (exception_keeper_lineno_54 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_54);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_54, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_54);
    // Tried code:
    {
        bool tmp_condition_result_54;
        PyObject *tmp_cmp_expr_left_40;
        PyObject *tmp_cmp_expr_right_40;
        tmp_cmp_expr_left_40 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_40 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_40, tmp_cmp_expr_right_40);
        assert(!(tmp_res == -1));
        tmp_condition_result_54 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_54;
        } else {
            goto branch_no_54;
        }
    }
    branch_yes_54:;
    {
        nuitka_bool tmp_assign_source_142;
        tmp_assign_source_142 = NUITKA_BOOL_FALSE;
        tmp_with_14__indicator = tmp_assign_source_142;
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_called_value_122;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        CHECK_OBJECT(tmp_with_14__exit);
        tmp_called_value_122 = tmp_with_14__exit;
        tmp_args_element_value_53 = EXC_TYPE(tstate);
        tmp_args_element_value_54 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_54); 
        tmp_args_element_value_55 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 607;
        {
            PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55};
            tmp_operand_value_14 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_122, call_args);
        }

        if (tmp_operand_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 607;

            goto try_except_handler_57;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        Py_DECREF(tmp_operand_value_14);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 607;

            goto try_except_handler_57;
        }
        tmp_condition_result_55 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 607;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_57;
    branch_no_55:;
    goto branch_end_54;
    branch_no_54:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 602;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_57;
    branch_end_54:;
    goto try_end_55;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_lineno_55 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_55 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_14);

    // Re-raise.
    exception_state = exception_keeper_name_55;
    exception_lineno = exception_keeper_lineno_55;

    goto try_except_handler_55;
    // End of try:
    try_end_55:;
    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_14);

    goto try_end_54;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_54:;
    goto try_end_56;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_lineno_56 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_56 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_56;
        nuitka_bool tmp_cmp_expr_left_41;
        nuitka_bool tmp_cmp_expr_right_41;
        assert(tmp_with_14__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_41 = tmp_with_14__indicator;
        tmp_cmp_expr_right_41 = NUITKA_BOOL_TRUE;
        tmp_condition_result_56 = (tmp_cmp_expr_left_41 == tmp_cmp_expr_right_41) ? true : false;
        if (tmp_condition_result_56 != false) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
    }
    branch_yes_56:;
    {
        PyObject *tmp_called_value_123;
        PyObject *tmp_call_result_77;
        CHECK_OBJECT(tmp_with_14__exit);
        tmp_called_value_123 = tmp_with_14__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 607;
        tmp_call_result_77 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_123, mod_consts[71]);

        if (tmp_call_result_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_56);

            exception_lineno = 607;

            goto try_except_handler_54;
        }
        Py_DECREF(tmp_call_result_77);
    }
    branch_no_56:;
    // Re-raise.
    exception_state = exception_keeper_name_56;
    exception_lineno = exception_keeper_lineno_56;

    goto try_except_handler_54;
    // End of try:
    try_end_56:;
    {
        bool tmp_condition_result_57;
        nuitka_bool tmp_cmp_expr_left_42;
        nuitka_bool tmp_cmp_expr_right_42;
        assert(tmp_with_14__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_42 = tmp_with_14__indicator;
        tmp_cmp_expr_right_42 = NUITKA_BOOL_TRUE;
        tmp_condition_result_57 = (tmp_cmp_expr_left_42 == tmp_cmp_expr_right_42) ? true : false;
        if (tmp_condition_result_57 != false) {
            goto branch_yes_57;
        } else {
            goto branch_no_57;
        }
    }
    branch_yes_57:;
    {
        PyObject *tmp_called_value_124;
        PyObject *tmp_call_result_78;
        CHECK_OBJECT(tmp_with_14__exit);
        tmp_called_value_124 = tmp_with_14__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 607;
        tmp_call_result_78 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_124, mod_consts[71]);

        if (tmp_call_result_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 607;

            goto try_except_handler_54;
        }
        Py_DECREF(tmp_call_result_78);
    }
    branch_no_57:;
    goto try_end_57;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_lineno_57 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_57 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_14__source);
    tmp_with_14__source = NULL;
    Py_XDECREF(tmp_with_14__enter);
    tmp_with_14__enter = NULL;
    Py_XDECREF(tmp_with_14__exit);
    tmp_with_14__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_57:;
    CHECK_OBJECT(tmp_with_14__source);
    Py_DECREF(tmp_with_14__source);
    tmp_with_14__source = NULL;
    CHECK_OBJECT(tmp_with_14__enter);
    Py_DECREF(tmp_with_14__enter);
    tmp_with_14__enter = NULL;
    CHECK_OBJECT(tmp_with_14__exit);
    Py_DECREF(tmp_with_14__exit);
    tmp_with_14__exit = NULL;
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_143);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_called_instance_15;
        tmp_called_instance_15 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 618;

            goto try_except_handler_58;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 618;
        tmp_assign_source_144 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_15,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[244], 0)
        );

        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 618;

            goto try_except_handler_58;
        }
        assert(tmp_with_15__source == NULL);
        tmp_with_15__source = tmp_assign_source_144;
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_125;
        PyObject *tmp_expression_value_87;
        CHECK_OBJECT(tmp_with_15__source);
        tmp_expression_value_87 = tmp_with_15__source;
        tmp_called_value_125 = LOOKUP_SPECIAL(tstate, tmp_expression_value_87, mod_consts[64]);
        if (tmp_called_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 618;

            goto try_except_handler_58;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 618;
        tmp_assign_source_145 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_125);
        Py_DECREF(tmp_called_value_125);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 618;

            goto try_except_handler_58;
        }
        assert(tmp_with_15__enter == NULL);
        tmp_with_15__enter = tmp_assign_source_145;
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_with_15__source);
        tmp_expression_value_88 = tmp_with_15__source;
        tmp_assign_source_146 = LOOKUP_SPECIAL(tstate, tmp_expression_value_88, mod_consts[65]);
        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 618;

            goto try_except_handler_58;
        }
        assert(tmp_with_15__exit == NULL);
        tmp_with_15__exit = tmp_assign_source_146;
    }
    {
        nuitka_bool tmp_assign_source_147;
        tmp_assign_source_147 = NUITKA_BOOL_TRUE;
        tmp_with_15__indicator = tmp_assign_source_147;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_126;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_call_result_79;
        PyObject *tmp_kw_call_arg_value_0_35;
        PyObject *tmp_kw_call_arg_value_1_35;
        PyObject *tmp_kw_call_arg_value_2_35;
        PyObject *tmp_kw_call_dict_value_0_35;
        PyObject *tmp_called_value_127;
        PyObject *tmp_call_arg_element_8;
        tmp_expression_value_89 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_89 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 619;

            goto try_except_handler_60;
        }
        tmp_called_value_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[66]);
        if (tmp_called_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 619;

            goto try_except_handler_60;
        }
        tmp_kw_call_arg_value_0_35 = mod_consts[245];
        tmp_kw_call_arg_value_1_35 = mod_consts[223];
        tmp_kw_call_arg_value_2_35 = module_var_accessor_pandas$core$config_init_$$_parquet_engine_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[243]);
        }

        if (tmp_kw_call_arg_value_2_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_126);

            exception_lineno = 622;

            goto try_except_handler_60;
        }
        tmp_called_value_127 = module_var_accessor_pandas$core$config_init_$$_is_one_of_factory(tstate);
        if (unlikely(tmp_called_value_127 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_126);

            exception_lineno = 623;

            goto try_except_handler_60;
        }
        tmp_call_arg_element_8 = MAKE_LIST3(tstate, mod_consts[223],mod_consts[246],mod_consts[247]);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 623;
        tmp_kw_call_dict_value_0_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_127, tmp_call_arg_element_8);
        Py_DECREF(tmp_call_arg_element_8);
        if (tmp_kw_call_dict_value_0_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 623;

            goto try_except_handler_60;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 619;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_35, tmp_kw_call_arg_value_1_35, tmp_kw_call_arg_value_2_35};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_35};
            tmp_call_result_79 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_126, args, kw_values, mod_consts[142]);
        }

        Py_DECREF(tmp_called_value_126);
        Py_DECREF(tmp_kw_call_dict_value_0_35);
        if (tmp_call_result_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 619;

            goto try_except_handler_60;
        }
        Py_DECREF(tmp_call_result_79);
    }
    goto try_end_58;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_lineno_58 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_58 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 15.
    exception_preserved_15 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_58);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_58);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_58, exception_tb);
        } else if (exception_keeper_lineno_58 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_58);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_58, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_58);
    // Tried code:
    {
        bool tmp_condition_result_58;
        PyObject *tmp_cmp_expr_left_43;
        PyObject *tmp_cmp_expr_right_43;
        tmp_cmp_expr_left_43 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_43 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_43, tmp_cmp_expr_right_43);
        assert(!(tmp_res == -1));
        tmp_condition_result_58 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_58 != false) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        nuitka_bool tmp_assign_source_148;
        tmp_assign_source_148 = NUITKA_BOOL_FALSE;
        tmp_with_15__indicator = tmp_assign_source_148;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_called_value_128;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        CHECK_OBJECT(tmp_with_15__exit);
        tmp_called_value_128 = tmp_with_15__exit;
        tmp_args_element_value_56 = EXC_TYPE(tstate);
        tmp_args_element_value_57 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_57); 
        tmp_args_element_value_58 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 623;
        {
            PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58};
            tmp_operand_value_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_128, call_args);
        }

        if (tmp_operand_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 623;

            goto try_except_handler_61;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        Py_DECREF(tmp_operand_value_15);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 623;

            goto try_except_handler_61;
        }
        tmp_condition_result_59 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 623;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_61;
    branch_no_59:;
    goto branch_end_58;
    branch_no_58:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 618;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_61;
    branch_end_58:;
    goto try_end_59;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_lineno_59 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_59 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_15);

    // Re-raise.
    exception_state = exception_keeper_name_59;
    exception_lineno = exception_keeper_lineno_59;

    goto try_except_handler_59;
    // End of try:
    try_end_59:;
    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_15);

    goto try_end_58;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_58:;
    goto try_end_60;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_lineno_60 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_60 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_60;
        nuitka_bool tmp_cmp_expr_left_44;
        nuitka_bool tmp_cmp_expr_right_44;
        assert(tmp_with_15__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_44 = tmp_with_15__indicator;
        tmp_cmp_expr_right_44 = NUITKA_BOOL_TRUE;
        tmp_condition_result_60 = (tmp_cmp_expr_left_44 == tmp_cmp_expr_right_44) ? true : false;
        if (tmp_condition_result_60 != false) {
            goto branch_yes_60;
        } else {
            goto branch_no_60;
        }
    }
    branch_yes_60:;
    {
        PyObject *tmp_called_value_129;
        PyObject *tmp_call_result_80;
        CHECK_OBJECT(tmp_with_15__exit);
        tmp_called_value_129 = tmp_with_15__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 623;
        tmp_call_result_80 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_129, mod_consts[71]);

        if (tmp_call_result_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_60);

            exception_lineno = 623;

            goto try_except_handler_58;
        }
        Py_DECREF(tmp_call_result_80);
    }
    branch_no_60:;
    // Re-raise.
    exception_state = exception_keeper_name_60;
    exception_lineno = exception_keeper_lineno_60;

    goto try_except_handler_58;
    // End of try:
    try_end_60:;
    {
        bool tmp_condition_result_61;
        nuitka_bool tmp_cmp_expr_left_45;
        nuitka_bool tmp_cmp_expr_right_45;
        assert(tmp_with_15__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_45 = tmp_with_15__indicator;
        tmp_cmp_expr_right_45 = NUITKA_BOOL_TRUE;
        tmp_condition_result_61 = (tmp_cmp_expr_left_45 == tmp_cmp_expr_right_45) ? true : false;
        if (tmp_condition_result_61 != false) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_call_result_81;
        CHECK_OBJECT(tmp_with_15__exit);
        tmp_called_value_130 = tmp_with_15__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 623;
        tmp_call_result_81 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_130, mod_consts[71]);

        if (tmp_call_result_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 623;

            goto try_except_handler_58;
        }
        Py_DECREF(tmp_call_result_81);
    }
    branch_no_61:;
    goto try_end_61;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_lineno_61 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_61 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_15__source);
    tmp_with_15__source = NULL;
    Py_XDECREF(tmp_with_15__enter);
    tmp_with_15__enter = NULL;
    Py_XDECREF(tmp_with_15__exit);
    tmp_with_15__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_61;
    exception_lineno = exception_keeper_lineno_61;

    goto frame_exception_exit_1;
    // End of try:
    try_end_61:;
    CHECK_OBJECT(tmp_with_15__source);
    Py_DECREF(tmp_with_15__source);
    tmp_with_15__source = NULL;
    CHECK_OBJECT(tmp_with_15__enter);
    Py_DECREF(tmp_with_15__enter);
    tmp_with_15__enter = NULL;
    CHECK_OBJECT(tmp_with_15__exit);
    Py_DECREF(tmp_with_15__exit);
    tmp_with_15__exit = NULL;
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[248];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;


        tmp_assign_source_150 = MAKE_FUNCTION_pandas$core$config_init$$$function__8_register_plotting_backend_cb(tstate);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_150);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_instance_16;
        tmp_called_instance_16 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 647;

            goto try_except_handler_62;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 647;
        tmp_assign_source_151 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_16,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[251], 0)
        );

        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 647;

            goto try_except_handler_62;
        }
        assert(tmp_with_16__source == NULL);
        tmp_with_16__source = tmp_assign_source_151;
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_value_131;
        PyObject *tmp_expression_value_90;
        CHECK_OBJECT(tmp_with_16__source);
        tmp_expression_value_90 = tmp_with_16__source;
        tmp_called_value_131 = LOOKUP_SPECIAL(tstate, tmp_expression_value_90, mod_consts[64]);
        if (tmp_called_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 647;

            goto try_except_handler_62;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 647;
        tmp_assign_source_152 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_131);
        Py_DECREF(tmp_called_value_131);
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 647;

            goto try_except_handler_62;
        }
        assert(tmp_with_16__enter == NULL);
        tmp_with_16__enter = tmp_assign_source_152;
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_expression_value_91;
        CHECK_OBJECT(tmp_with_16__source);
        tmp_expression_value_91 = tmp_with_16__source;
        tmp_assign_source_153 = LOOKUP_SPECIAL(tstate, tmp_expression_value_91, mod_consts[65]);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 647;

            goto try_except_handler_62;
        }
        assert(tmp_with_16__exit == NULL);
        tmp_with_16__exit = tmp_assign_source_153;
    }
    {
        nuitka_bool tmp_assign_source_154;
        tmp_assign_source_154 = NUITKA_BOOL_TRUE;
        tmp_with_16__indicator = tmp_assign_source_154;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_132;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_call_result_82;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_kw_call_value_2_1;
        tmp_expression_value_92 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_92 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 648;

            goto try_except_handler_64;
        }
        tmp_called_value_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[66]);
        if (tmp_called_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 648;

            goto try_except_handler_64;
        }
        tmp_kw_call_value_0_12 = mod_consts[28];
        tmp_kw_call_value_1_11 = module_var_accessor_pandas$core$config_init_$$_plotting_backend_doc(tstate);
        if (unlikely(tmp_kw_call_value_1_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[249]);
        }

        if (tmp_kw_call_value_1_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_132);

            exception_lineno = 651;

            goto try_except_handler_64;
        }
        tmp_kw_call_value_2_1 = module_var_accessor_pandas$core$config_init_$$_register_plotting_backend_cb(tstate);
        if (unlikely(tmp_kw_call_value_2_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[250]);
        }

        if (tmp_kw_call_value_2_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_132);

            exception_lineno = 652;

            goto try_except_handler_64;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 648;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_11, tmp_kw_call_value_2_1};
            tmp_call_result_82 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_132, mod_consts[252], kw_values, mod_consts[253]);
        }

        Py_DECREF(tmp_called_value_132);
        if (tmp_call_result_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 648;

            goto try_except_handler_64;
        }
        Py_DECREF(tmp_call_result_82);
    }
    goto try_end_62;
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_lineno_62 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_62 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 16.
    exception_preserved_16 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_62);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_62);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_62, exception_tb);
        } else if (exception_keeper_lineno_62 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_62);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_62, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_62);
    // Tried code:
    {
        bool tmp_condition_result_62;
        PyObject *tmp_cmp_expr_left_46;
        PyObject *tmp_cmp_expr_right_46;
        tmp_cmp_expr_left_46 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_46 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_46, tmp_cmp_expr_right_46);
        assert(!(tmp_res == -1));
        tmp_condition_result_62 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_62 != false) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
    }
    branch_yes_62:;
    {
        nuitka_bool tmp_assign_source_155;
        tmp_assign_source_155 = NUITKA_BOOL_FALSE;
        tmp_with_16__indicator = tmp_assign_source_155;
    }
    {
        bool tmp_condition_result_63;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_called_value_133;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        CHECK_OBJECT(tmp_with_16__exit);
        tmp_called_value_133 = tmp_with_16__exit;
        tmp_args_element_value_59 = EXC_TYPE(tstate);
        tmp_args_element_value_60 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_60); 
        tmp_args_element_value_61 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 652;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_operand_value_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_133, call_args);
        }

        if (tmp_operand_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 652;

            goto try_except_handler_65;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        Py_DECREF(tmp_operand_value_16);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 652;

            goto try_except_handler_65;
        }
        tmp_condition_result_63 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto branch_yes_63;
        } else {
            goto branch_no_63;
        }
    }
    branch_yes_63:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 652;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_65;
    branch_no_63:;
    goto branch_end_62;
    branch_no_62:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 647;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_65;
    branch_end_62:;
    goto try_end_63;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_lineno_63 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_63 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_16);

    // Re-raise.
    exception_state = exception_keeper_name_63;
    exception_lineno = exception_keeper_lineno_63;

    goto try_except_handler_63;
    // End of try:
    try_end_63:;
    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_16);

    goto try_end_62;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_62:;
    goto try_end_64;
    // Exception handler code:
    try_except_handler_63:;
    exception_keeper_lineno_64 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_64 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_64;
        nuitka_bool tmp_cmp_expr_left_47;
        nuitka_bool tmp_cmp_expr_right_47;
        assert(tmp_with_16__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_47 = tmp_with_16__indicator;
        tmp_cmp_expr_right_47 = NUITKA_BOOL_TRUE;
        tmp_condition_result_64 = (tmp_cmp_expr_left_47 == tmp_cmp_expr_right_47) ? true : false;
        if (tmp_condition_result_64 != false) {
            goto branch_yes_64;
        } else {
            goto branch_no_64;
        }
    }
    branch_yes_64:;
    {
        PyObject *tmp_called_value_134;
        PyObject *tmp_call_result_83;
        CHECK_OBJECT(tmp_with_16__exit);
        tmp_called_value_134 = tmp_with_16__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 652;
        tmp_call_result_83 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_134, mod_consts[71]);

        if (tmp_call_result_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_64);

            exception_lineno = 652;

            goto try_except_handler_62;
        }
        Py_DECREF(tmp_call_result_83);
    }
    branch_no_64:;
    // Re-raise.
    exception_state = exception_keeper_name_64;
    exception_lineno = exception_keeper_lineno_64;

    goto try_except_handler_62;
    // End of try:
    try_end_64:;
    {
        bool tmp_condition_result_65;
        nuitka_bool tmp_cmp_expr_left_48;
        nuitka_bool tmp_cmp_expr_right_48;
        assert(tmp_with_16__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_48 = tmp_with_16__indicator;
        tmp_cmp_expr_right_48 = NUITKA_BOOL_TRUE;
        tmp_condition_result_65 = (tmp_cmp_expr_left_48 == tmp_cmp_expr_right_48) ? true : false;
        if (tmp_condition_result_65 != false) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
    }
    branch_yes_65:;
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_call_result_84;
        CHECK_OBJECT(tmp_with_16__exit);
        tmp_called_value_135 = tmp_with_16__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 652;
        tmp_call_result_84 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_135, mod_consts[71]);

        if (tmp_call_result_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 652;

            goto try_except_handler_62;
        }
        Py_DECREF(tmp_call_result_84);
    }
    branch_no_65:;
    goto try_end_65;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_lineno_65 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_65 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_16__source);
    tmp_with_16__source = NULL;
    Py_XDECREF(tmp_with_16__enter);
    tmp_with_16__enter = NULL;
    Py_XDECREF(tmp_with_16__exit);
    tmp_with_16__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_65;
    exception_lineno = exception_keeper_lineno_65;

    goto frame_exception_exit_1;
    // End of try:
    try_end_65:;
    CHECK_OBJECT(tmp_with_16__source);
    Py_DECREF(tmp_with_16__source);
    tmp_with_16__source = NULL;
    CHECK_OBJECT(tmp_with_16__enter);
    Py_DECREF(tmp_with_16__enter);
    tmp_with_16__enter = NULL;
    CHECK_OBJECT(tmp_with_16__exit);
    Py_DECREF(tmp_with_16__exit);
    tmp_with_16__exit = NULL;
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;


        tmp_assign_source_157 = MAKE_FUNCTION_pandas$core$config_init$$$function__9_register_converter_cb(tstate);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_157);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_instance_17;
        tmp_called_instance_17 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_called_instance_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 676;

            goto try_except_handler_66;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 676;
        tmp_assign_source_158 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_17,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[257], 0)
        );

        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 676;

            goto try_except_handler_66;
        }
        assert(tmp_with_17__source == NULL);
        tmp_with_17__source = tmp_assign_source_158;
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_136;
        PyObject *tmp_expression_value_93;
        CHECK_OBJECT(tmp_with_17__source);
        tmp_expression_value_93 = tmp_with_17__source;
        tmp_called_value_136 = LOOKUP_SPECIAL(tstate, tmp_expression_value_93, mod_consts[64]);
        if (tmp_called_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 676;

            goto try_except_handler_66;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 676;
        tmp_assign_source_159 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_136);
        Py_DECREF(tmp_called_value_136);
        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 676;

            goto try_except_handler_66;
        }
        assert(tmp_with_17__enter == NULL);
        tmp_with_17__enter = tmp_assign_source_159;
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_with_17__source);
        tmp_expression_value_94 = tmp_with_17__source;
        tmp_assign_source_160 = LOOKUP_SPECIAL(tstate, tmp_expression_value_94, mod_consts[65]);
        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 676;

            goto try_except_handler_66;
        }
        assert(tmp_with_17__exit == NULL);
        tmp_with_17__exit = tmp_assign_source_160;
    }
    {
        nuitka_bool tmp_assign_source_161;
        tmp_assign_source_161 = NUITKA_BOOL_TRUE;
        tmp_with_17__indicator = tmp_assign_source_161;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_137;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_call_result_85;
        PyObject *tmp_kw_call_arg_value_0_36;
        PyObject *tmp_kw_call_arg_value_1_36;
        PyObject *tmp_kw_call_arg_value_2_36;
        PyObject *tmp_kw_call_dict_value_0_36;
        PyObject *tmp_called_value_138;
        PyObject *tmp_call_arg_element_9;
        PyObject *tmp_kw_call_dict_value_1_6;
        tmp_expression_value_95 = module_var_accessor_pandas$core$config_init_$$_cf(tstate);
        if (unlikely(tmp_expression_value_95 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 677;

            goto try_except_handler_68;
        }
        tmp_called_value_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[66]);
        if (tmp_called_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 677;

            goto try_except_handler_68;
        }
        tmp_kw_call_arg_value_0_36 = mod_consts[258];
        tmp_kw_call_arg_value_1_36 = mod_consts[223];
        tmp_kw_call_arg_value_2_36 = module_var_accessor_pandas$core$config_init_$$_register_converter_doc(tstate);
        if (unlikely(tmp_kw_call_arg_value_2_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[255]);
        }

        if (tmp_kw_call_arg_value_2_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_137);

            exception_lineno = 680;

            goto try_except_handler_68;
        }
        tmp_called_value_138 = module_var_accessor_pandas$core$config_init_$$_is_one_of_factory(tstate);
        if (unlikely(tmp_called_value_138 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_137);

            exception_lineno = 681;

            goto try_except_handler_68;
        }
        tmp_call_arg_element_9 = MAKE_LIST3(tstate, mod_consts[223],Py_True,Py_False);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 681;
        tmp_kw_call_dict_value_0_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_138, tmp_call_arg_element_9);
        Py_DECREF(tmp_call_arg_element_9);
        if (tmp_kw_call_dict_value_0_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_137);

            exception_lineno = 681;

            goto try_except_handler_68;
        }
        tmp_kw_call_dict_value_1_6 = module_var_accessor_pandas$core$config_init_$$_register_converter_cb(tstate);
        if (unlikely(tmp_kw_call_dict_value_1_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[256]);
        }

        if (tmp_kw_call_dict_value_1_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_137);
            Py_DECREF(tmp_kw_call_dict_value_0_36);

            exception_lineno = 682;

            goto try_except_handler_68;
        }
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 677;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_36, tmp_kw_call_arg_value_1_36, tmp_kw_call_arg_value_2_36};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_36, tmp_kw_call_dict_value_1_6};
            tmp_call_result_85 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_137, args, kw_values, mod_consts[68]);
        }

        Py_DECREF(tmp_called_value_137);
        Py_DECREF(tmp_kw_call_dict_value_0_36);
        if (tmp_call_result_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 677;

            goto try_except_handler_68;
        }
        Py_DECREF(tmp_call_result_85);
    }
    goto try_end_66;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_lineno_66 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_66 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 17.
    exception_preserved_17 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_66);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_keeper_lineno_66);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_66, exception_tb);
        } else if (exception_keeper_lineno_66 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_keeper_lineno_66);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_66, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_66);
    // Tried code:
    {
        bool tmp_condition_result_66;
        PyObject *tmp_cmp_expr_left_49;
        PyObject *tmp_cmp_expr_right_49;
        tmp_cmp_expr_left_49 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_49 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_49, tmp_cmp_expr_right_49);
        assert(!(tmp_res == -1));
        tmp_condition_result_66 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_66 != false) {
            goto branch_yes_66;
        } else {
            goto branch_no_66;
        }
    }
    branch_yes_66:;
    {
        nuitka_bool tmp_assign_source_162;
        tmp_assign_source_162 = NUITKA_BOOL_FALSE;
        tmp_with_17__indicator = tmp_assign_source_162;
    }
    {
        bool tmp_condition_result_67;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_called_value_139;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        CHECK_OBJECT(tmp_with_17__exit);
        tmp_called_value_139 = tmp_with_17__exit;
        tmp_args_element_value_62 = EXC_TYPE(tstate);
        tmp_args_element_value_63 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_63); 
        tmp_args_element_value_64 = (PyObject *)EXC_TRACEBACK(tstate);
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 682;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_operand_value_17 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_139, call_args);
        }

        if (tmp_operand_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 682;

            goto try_except_handler_69;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        Py_DECREF(tmp_operand_value_17);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 682;

            goto try_except_handler_69;
        }
        tmp_condition_result_67 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_67 != false) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 682;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_69;
    branch_no_67:;
    goto branch_end_66;
    branch_no_66:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 676;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pandas$core$config_init->m_frame)) {
            frame_frame_pandas$core$config_init->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }

    goto try_except_handler_69;
    branch_end_66:;
    goto try_end_67;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_lineno_67 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_67 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_17);

    // Re-raise.
    exception_state = exception_keeper_name_67;
    exception_lineno = exception_keeper_lineno_67;

    goto try_except_handler_67;
    // End of try:
    try_end_67:;
    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_17);

    goto try_end_66;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_66:;
    goto try_end_68;
    // Exception handler code:
    try_except_handler_67:;
    exception_keeper_lineno_68 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_68 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_68;
        nuitka_bool tmp_cmp_expr_left_50;
        nuitka_bool tmp_cmp_expr_right_50;
        assert(tmp_with_17__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_50 = tmp_with_17__indicator;
        tmp_cmp_expr_right_50 = NUITKA_BOOL_TRUE;
        tmp_condition_result_68 = (tmp_cmp_expr_left_50 == tmp_cmp_expr_right_50) ? true : false;
        if (tmp_condition_result_68 != false) {
            goto branch_yes_68;
        } else {
            goto branch_no_68;
        }
    }
    branch_yes_68:;
    {
        PyObject *tmp_called_value_140;
        PyObject *tmp_call_result_86;
        CHECK_OBJECT(tmp_with_17__exit);
        tmp_called_value_140 = tmp_with_17__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 682;
        tmp_call_result_86 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_140, mod_consts[71]);

        if (tmp_call_result_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_68);

            exception_lineno = 682;

            goto try_except_handler_66;
        }
        Py_DECREF(tmp_call_result_86);
    }
    branch_no_68:;
    // Re-raise.
    exception_state = exception_keeper_name_68;
    exception_lineno = exception_keeper_lineno_68;

    goto try_except_handler_66;
    // End of try:
    try_end_68:;
    {
        bool tmp_condition_result_69;
        nuitka_bool tmp_cmp_expr_left_51;
        nuitka_bool tmp_cmp_expr_right_51;
        assert(tmp_with_17__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_51 = tmp_with_17__indicator;
        tmp_cmp_expr_right_51 = NUITKA_BOOL_TRUE;
        tmp_condition_result_69 = (tmp_cmp_expr_left_51 == tmp_cmp_expr_right_51) ? true : false;
        if (tmp_condition_result_69 != false) {
            goto branch_yes_69;
        } else {
            goto branch_no_69;
        }
    }
    branch_yes_69:;
    {
        PyObject *tmp_called_value_141;
        PyObject *tmp_call_result_87;
        CHECK_OBJECT(tmp_with_17__exit);
        tmp_called_value_141 = tmp_with_17__exit;
        frame_frame_pandas$core$config_init->m_frame.f_lineno = 682;
        tmp_call_result_87 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_141, mod_consts[71]);

        if (tmp_call_result_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 682;

            goto try_except_handler_66;
        }
        Py_DECREF(tmp_call_result_87);
    }
    branch_no_69:;
    goto try_end_69;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_lineno_69 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_69 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_17__source);
    tmp_with_17__source = NULL;
    Py_XDECREF(tmp_with_17__enter);
    tmp_with_17__enter = NULL;
    Py_XDECREF(tmp_with_17__exit);
    tmp_with_17__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_69;
    exception_lineno = exception_keeper_lineno_69;

    goto frame_exception_exit_1;
    // End of try:
    try_end_69:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_pandas$core$config_init, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_pandas$core$config_init->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pandas$core$config_init, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_pandas$core$config_init);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_17__source);
    Py_DECREF(tmp_with_17__source);
    tmp_with_17__source = NULL;
    CHECK_OBJECT(tmp_with_17__enter);
    Py_DECREF(tmp_with_17__enter);
    tmp_with_17__enter = NULL;
    CHECK_OBJECT(tmp_with_17__exit);
    Py_DECREF(tmp_with_17__exit);
    tmp_with_17__exit = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas$core$config_init", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pandas.core.config_init" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pandas$core$config_init);
    return module_pandas$core$config_init;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$core$config_init", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
