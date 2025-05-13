/* Generated code for Python module 'scipy$stats$_distr_params'
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

/* The "module_scipy$stats$_distr_params" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$stats$_distr_params;
PyDictObject *moduledict_scipy$stats$_distr_params;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[142];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[142];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("scipy.stats._distr_params"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 142; i++) {
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
void checkModuleConstants_scipy$stats$_distr_params(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 142; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_scipy$stats$_distr_params_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$stats$_distr_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$stats$_distr_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[141]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$stats$_distr_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[141])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[141], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[141])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[141], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[141]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[141]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[141]);
    }

    return result;
}

static PyObject *module_var_accessor_scipy$stats$_distr_params_$$_np(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_scipy$stats$_distr_params->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_scipy$stats$_distr_params->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[7]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_scipy$stats$_distr_params->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[7])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[7], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[7])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[7], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[7]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[7]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[7]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_fb48e5af3f6d2771fee18e44e3cce68c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[138]); CHECK_OBJECT(module_filename_obj);
    code_objects_fb48e5af3f6d2771fee18e44e3cce68c = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[139], mod_consts[139], NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_scipy$stats$_distr_params[] = {

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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_scipy$stats$_distr_params);

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
        module_scipy$stats$_distr_params,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_scipy$stats$_distr_params,
        sizeof(function_table_scipy$stats$_distr_params) / sizeof(function_impl_code)
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
static char const *module_full_name = "scipy.stats._distr_params";
#endif

// Internal entry point for module code.
PyObject *modulecode_scipy$stats$_distr_params(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy$stats$_distr_params");

    // Store the module for future use.
    module_scipy$stats$_distr_params = module;

    moduledict_scipy$stats$_distr_params = MODULE_DICT(module_scipy$stats$_distr_params);

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
        PRINT_STRING("scipy$stats$_distr_params: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy$stats$_distr_params: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("scipy$stats$_distr_params: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "scipy.stats._distr_params" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initscipy$stats$_distr_params\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$stats$_distr_params,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$stats$_distr_params,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[140]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$stats$_distr_params,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$stats$_distr_params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$stats$_distr_params,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$stats$_distr_params);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_scipy$stats$_distr_params);
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

        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_frame_scipy$stats$_distr_params;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_frame_scipy$stats$_distr_params = MAKE_MODULE_FRAME(code_objects_fb48e5af3f6d2771fee18e44e3cce68c, module_scipy$stats$_distr_params);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_scipy$stats$_distr_params);
    assert(Py_REFCNT(frame_frame_scipy$stats$_distr_params) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_scipy$stats$_distr_params_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_scipy$stats$_distr_params_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$stats$_distr_params;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_scipy$stats$_distr_params->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = DEEP_COPY_LIST_GUIDED(tstate, mod_consts[8], "llllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll");
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = DEEP_COPY_LIST_GUIDED(tstate, mod_consts[10], "lllllllllllllllllllllll");
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = DEEP_COPY_LIST_GUIDED(tstate, mod_consts[12], "lllllllllllllllllll");
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_list_element_1;
        tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[14],mod_consts[15]);
        tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 103);
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_list_element_3;
            PyObject *tmp_list_element_4;
            PyObject *tmp_list_element_5;
            PyObject *tmp_list_element_6;
            PyObject *tmp_list_element_7;
            PyList_SET_ITEM(tmp_assign_source_8, 0, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[16],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 1, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[17],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 2, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[18],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 3, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[19],mod_consts[20]);
            PyList_SET_ITEM(tmp_assign_source_8, 4, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[21],mod_consts[20]);
            PyList_SET_ITEM(tmp_assign_source_8, 5, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[22],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 6, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[23],mod_consts[24]);
            PyList_SET_ITEM(tmp_assign_source_8, 7, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[25],mod_consts[24]);
            PyList_SET_ITEM(tmp_assign_source_8, 8, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[26],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 9, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[27],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 10, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[28],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 11, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[29],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 12, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[30],mod_consts[31]);
            PyList_SET_ITEM(tmp_assign_source_8, 13, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[32],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 14, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[33],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 15, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[34],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 16, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[35],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 17, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[36],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 18, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[37],mod_consts[38]);
            PyList_SET_ITEM(tmp_assign_source_8, 19, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[39],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 20, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[40],mod_consts[41]);
            PyList_SET_ITEM(tmp_assign_source_8, 21, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[42],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 22, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[43],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 23, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[44],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 24, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[45],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 25, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[46],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 26, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[47],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 27, tmp_list_element_1);
            tmp_list_element_2 = mod_consts[48];
            tmp_list_element_1 = MAKE_LIST_EMPTY(tstate, 2);
            {
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_expression_value_1;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_2);
                tmp_expression_value_1 = module_var_accessor_scipy$stats$_distr_params_$$_np(tstate);
                assert(!(tmp_expression_value_1 == NULL));
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[49]);
                if (tmp_tuple_element_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 199;

                    goto list_build_exception_2;
                }
                tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 1);
                PyTuple_SET_ITEM(tmp_list_element_2, 0, tmp_tuple_element_1);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_2);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            PyList_SET_ITEM(tmp_assign_source_8, 28, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[50],mod_consts[51]);
            PyList_SET_ITEM(tmp_assign_source_8, 29, tmp_list_element_1);
            tmp_list_element_3 = mod_consts[52];
            tmp_list_element_1 = MAKE_LIST_EMPTY(tstate, 2);
            {
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_expression_value_2;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_3);
                tmp_expression_value_2 = module_var_accessor_scipy$stats$_distr_params_$$_np(tstate);
                if (unlikely(tmp_expression_value_2 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 201;

                    goto list_build_exception_3;
                }
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[49]);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 201;

                    goto list_build_exception_3;
                }
                tmp_list_element_3 = MAKE_TUPLE_EMPTY(tstate, 1);
                PyTuple_SET_ITEM(tmp_list_element_3, 0, tmp_tuple_element_2);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_3);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            PyList_SET_ITEM(tmp_assign_source_8, 30, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[53],mod_consts[54]);
            PyList_SET_ITEM(tmp_assign_source_8, 31, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[55],mod_consts[56]);
            PyList_SET_ITEM(tmp_assign_source_8, 32, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[57],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 33, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[58],mod_consts[59]);
            PyList_SET_ITEM(tmp_assign_source_8, 34, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[60],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 35, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[61],mod_consts[62]);
            PyList_SET_ITEM(tmp_assign_source_8, 36, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[63],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 37, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[64],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 38, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[65],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 39, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[66],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 40, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[67],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 41, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[68],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 42, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[69],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 43, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[70],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 44, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[71],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 45, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[72],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 46, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[73],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 47, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[74],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 48, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[75],mod_consts[76]);
            PyList_SET_ITEM(tmp_assign_source_8, 49, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[77],mod_consts[76]);
            PyList_SET_ITEM(tmp_assign_source_8, 50, tmp_list_element_1);
            tmp_list_element_4 = mod_consts[78];
            tmp_list_element_1 = MAKE_LIST_EMPTY(tstate, 2);
            {
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_expression_value_3;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_4);
                tmp_expression_value_3 = module_var_accessor_scipy$stats$_distr_params_$$_np(tstate);
                if (unlikely(tmp_expression_value_3 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 222;

                    goto list_build_exception_4;
                }
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[79]);
                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 222;

                    goto list_build_exception_4;
                }
                tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
                PyTuple_SET_ITEM(tmp_list_element_4, 0, tmp_tuple_element_3);
                tmp_tuple_element_3 = const_int_0;
                PyTuple_SET_ITEM0(tmp_list_element_4, 1, tmp_tuple_element_3);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_4);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            PyList_SET_ITEM(tmp_assign_source_8, 51, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[80],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 52, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[81],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 53, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[82],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 54, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[83],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 55, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[84],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 56, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[85],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 57, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[86],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 58, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[87],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 59, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[88],mod_consts[24]);
            PyList_SET_ITEM(tmp_assign_source_8, 60, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[89],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 61, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[90],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 62, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[91],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 63, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[92],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 64, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[93],mod_consts[94]);
            PyList_SET_ITEM(tmp_assign_source_8, 65, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[95],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 66, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[96],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 67, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[97],mod_consts[76]);
            PyList_SET_ITEM(tmp_assign_source_8, 68, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[98],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 69, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[99],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 70, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[100],mod_consts[31]);
            PyList_SET_ITEM(tmp_assign_source_8, 71, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[101],mod_consts[102]);
            PyList_SET_ITEM(tmp_assign_source_8, 72, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[103],mod_consts[31]);
            PyList_SET_ITEM(tmp_assign_source_8, 73, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[104],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 74, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[105],mod_consts[106]);
            PyList_SET_ITEM(tmp_assign_source_8, 75, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[107],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 76, tmp_list_element_1);
            tmp_list_element_5 = mod_consts[108];
            tmp_list_element_1 = MAKE_LIST_EMPTY(tstate, 2);
            {
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_expression_value_4;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_5);
                tmp_expression_value_4 = module_var_accessor_scipy$stats$_distr_params_$$_np(tstate);
                if (unlikely(tmp_expression_value_4 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 248;

                    goto list_build_exception_5;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[79]);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 248;

                    goto list_build_exception_5;
                }
                tmp_list_element_5 = MAKE_TUPLE_EMPTY(tstate, 1);
                PyTuple_SET_ITEM(tmp_list_element_5, 0, tmp_tuple_element_4);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_5);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            PyList_SET_ITEM(tmp_assign_source_8, 77, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[109],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 78, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[110],mod_consts[76]);
            PyList_SET_ITEM(tmp_assign_source_8, 79, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[111],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 80, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[112],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 81, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[113],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 82, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[114],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 83, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[115],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 84, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[116],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 85, tmp_list_element_1);
            tmp_list_element_6 = mod_consts[117];
            tmp_list_element_1 = MAKE_LIST_EMPTY(tstate, 2);
            {
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_expression_value_5;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_6);
                tmp_expression_value_5 = module_var_accessor_scipy$stats$_distr_params_$$_np(tstate);
                if (unlikely(tmp_expression_value_5 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
                }

                if (tmp_expression_value_5 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 257;

                    goto list_build_exception_6;
                }
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[49]);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 257;

                    goto list_build_exception_6;
                }
                tmp_list_element_6 = MAKE_TUPLE_EMPTY(tstate, 1);
                PyTuple_SET_ITEM(tmp_list_element_6, 0, tmp_tuple_element_5);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_6);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            PyList_SET_ITEM(tmp_assign_source_8, 86, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[118],mod_consts[24]);
            PyList_SET_ITEM(tmp_assign_source_8, 87, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[119],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 88, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[120],mod_consts[121]);
            PyList_SET_ITEM(tmp_assign_source_8, 89, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[122],mod_consts[123]);
            PyList_SET_ITEM(tmp_assign_source_8, 90, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[124],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 91, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[125],mod_consts[94]);
            PyList_SET_ITEM(tmp_assign_source_8, 92, tmp_list_element_1);
            tmp_list_element_7 = mod_consts[126];
            tmp_list_element_1 = MAKE_LIST_EMPTY(tstate, 2);
            {
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_expression_value_6;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_7);
                tmp_expression_value_6 = module_var_accessor_scipy$stats$_distr_params_$$_np(tstate);
                if (unlikely(tmp_expression_value_6 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
                }

                if (tmp_expression_value_6 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 264;

                    goto list_build_exception_7;
                }
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[79]);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 264;

                    goto list_build_exception_7;
                }
                tmp_list_element_7 = MAKE_TUPLE_EMPTY(tstate, 1);
                PyTuple_SET_ITEM(tmp_list_element_7, 0, tmp_tuple_element_6);
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_7);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_7:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            PyList_SET_ITEM(tmp_assign_source_8, 93, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[127],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 94, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[128],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 95, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[129],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 96, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[130],const_tuple_empty);
            PyList_SET_ITEM(tmp_assign_source_8, 97, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[131],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 98, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[132],mod_consts[15]);
            PyList_SET_ITEM(tmp_assign_source_8, 99, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[133],mod_consts[123]);
            PyList_SET_ITEM(tmp_assign_source_8, 100, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[134],mod_consts[135]);
            PyList_SET_ITEM(tmp_assign_source_8, 101, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST2(tstate, mod_consts[136],mod_consts[123]);
            PyList_SET_ITEM(tmp_assign_source_8, 102, tmp_list_element_1);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_8);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        UPDATE_STRING_DICT1(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_8);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_scipy$stats$_distr_params, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_scipy$stats$_distr_params->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_scipy$stats$_distr_params, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_scipy$stats$_distr_params);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy$stats$_distr_params", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "scipy.stats._distr_params" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_scipy$stats$_distr_params);
    return module_scipy$stats$_distr_params;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$stats$_distr_params, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$stats$_distr_params", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
